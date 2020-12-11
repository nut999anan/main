from flask_sqlalchemy import SQLAlchemy
from flask import Flask,render_template
from flask import redirect,url_for
from flask import request,session
from datetime import timedelta
from flask import flash


app = Flask(__name__)
app.secret_key = "hello"
app.permanent_session_lifetime  = timedelta(minutes = 5)
app.config["SQLALCHEMY_DATABASE_URI"] = "sqlite:///users.sqlite3"
app.config["SQLALCHEMY_TRACK_MODIFICATIONS"] = False

db = SQLAlchemy(app)

class users(db.Model):
    _id = db.Column("id",db.Integer,primary_key = True)
    name = db.Column("name",db.String(100))
    email = db.Column("email",db.String(100))

    def __init__(self,name,email):
        self.name = name
        self.email = email






@app.route("/")#where to find this function
def home():
    return render_template("home.html")

@app.route("/view")
def view():
    return render_template("view.html",values = users.query.all())


@app.route("/login",methods = ["POST","GET"])
def login():
    if request.method == "POST":
        session.permanent = True #last long as lifetime 
        user = request.form["nm"]
        session["user"] = user

        found_user = users.query.filter_by(name = user).first()
        # delete users =>> users.query.filter_by(name = user).first().delete()
        if found_user:
            session["email"] = found_user.email

        else:
            usr = users(user,"")
            db.session.add(usr)
            db.session.commit()#save change

        flash("Log in sucessful")
        return redirect(url_for("user"))
    else:
        if "user" in session:
            flash("You already login")
            return redirect(url_for("user"))
            
        return render_template("login.html")

@app.route("/user",methods = ["POST","GET"])
def user():
    email = None
    if "user" in session:
        user = session["user"]
        if request.method == "POST":
            email = request.form["email"]
            session["email"] = email
            found_user = users.query.filter_by(name = user).first()
            found_user.email = email #change user email
            db.session.commit()

        else:
            if "email" in session:
                email = session["email"]

        return render_template("user.html",email = email)
    else:
        flash("you are not log in !")
        return redirect(url_for("login"))

@app.route("/logout")
def logout():
    if "user" in session:
            user = session["user"]
            flash(f"you have been log out, {user}","info")
    session.pop("user",None)
    session.pop("email",None)
    return redirect(url_for("login"))




if __name__ == "__main__":
    db.create_all()
    app.run(debug=True)   