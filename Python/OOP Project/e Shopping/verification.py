class Verification:
    def __init__(self) -> None:
        self.s_emails = {}
        self.c_emails = {}
    
    def s_add_email(self,email,password):
        self.s_emails[email] = password
    
    def c_add_email(self,email,password):
        self.c_emails[email] = password
    
    def check_email_seller(self,email,password):
        for em,ps in self.s_emails.items():
            if em == email and ps == password:
                return True
            else:
                return False
    
    def check_email_customer(self,email,password):
        for em,ps in self.c_emails.items():
            if em == email and ps == password:
                return True
            else:
                return False