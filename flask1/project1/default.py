from flask import Flask,redirect,url_for

app = Flask(__name__)

@app.route("/")#where to find this function
def home():
    return "<h1>Home<h1>"



if __name__ == "__main__":
    app.run(debug=True)