from flask import Flask,redirect,url_for,render_template

app = Flask(__name__)

@app.route("/")
def home():
    return "<h1>HOME</h1>"

@app.route("/<name>")#where to find this function
def user(name):
    return render_template("index.html",content = name,content2 = name + name)


if __name__ == "__main__":
    app.run(debug=True)  