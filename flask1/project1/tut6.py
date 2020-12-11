from flask import Flask,render_template
from flask import redirect,url_for
from flask import request,session
from datetime import timedelta
from flask import flash


app = Flask(__name__)
app.secret_key = "hello"
app.permanent_session_lifetime  = timedelta(minutes = 5)



@app.route("/")#where to find this function
def home():
    return render_template("home.html")

@app.route("/login",methods = ["POST","GET"])
def login():
    if request.method == "POST":
        session.permanent = True #last long as lifetime 
        user = request.form["nm"]
        session["user"] = user
        flash("Log in sucessful")
        return redirect(url_for("user"))
    else:
        if "user" in session:
            flash("You already login")
            return redirect(url_for("user"))
            
        return render_template("login.html")

@app.route("/user")
def user():
    if "user" in session:
        user = session["user"]
        return render_template("user.html",user = user)
    else:
        flash("you are not log in !")
        return redirect(url_for("login"))

@app.route("/logout")
def logout():
    if "user" in session:
            user = session["user"]
            flash(f"you have been log out, {user}","info")
    session.pop("user",None)
    return redirect(url_for("login"))




if __name__ == "__main__":
    app.run(debug=True)   