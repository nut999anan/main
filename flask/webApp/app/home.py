from  flask import Flask,render_template

app = Flask(__name__)

@app.route("/")
@app.route("/home")
def main():
    return "<h1> Home </h1>"

@app.route("/gallery")
def gallery():
    return "<h1> Gallery </h1>"


@app.route("/login")
def login():
    return "<h1> login </h1>"


@app.route("/user")
def user():
    return "<h1> user </h1>"



if __name__ ==  "__main__":
    app.run(debug = True)
