class User:
    def __init__(self, username, email):
        self.username = username
        self.email = email
    def __repr__(self):
        return f"User username: {self.username}, User email: {self.email}"

class Website():
    @staticmethod
    def web_url(username):
        return f"https://{username}.vercel.app"
    
class WebHost(User, Website):
    def url(self):
        return self.web_url(self.username)
    
tuc = WebHost("thankyoucode", "tuc@gmail.com")
print(tuc.url())