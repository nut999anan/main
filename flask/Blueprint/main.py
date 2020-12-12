from flask import Flask,render_template
from app.second import second


app = Flask(__name__,template_folder='app/templates')

#blue print 
app.register_blueprint(second,url_prefix="")

@app.route("/")
def test():
    return render_template("home.html")

if __name__ == "__main__":
    app.run(debug =True)
    