from  flask import Flask,render_template



app = Flask(__name__)

#main
@app.route("/")
@app.route("/main")
def home():
    return render_template("main.html")


#login
@app.route("/login")
def login():
    return render_template("login.html")


#logout
@app.route("/logout")
def logout():
    return render_template("logout.html")


#user
@app.route("/user")
def user():
    return render_template("user.html")

#gallery
# i will use the blue print to learn it 



#run
if __name__ ==  "__main__":
    app.run(debug = True)
