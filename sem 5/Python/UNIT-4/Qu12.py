class WeakPasswordError(Exception):
	pass

class PasswordMismatchError(Exception):
	pass

class PasswordManager(Exception):
	def __init__(self):
		self.password=None

	def set_password(self,pwd,confirmPass):
		if pwd!=confirmPass:
			raise PasswordMismatchError("Password not match!...")
		if len(pwd)<8:
			raise WeakPasswordError("Password must be at least 8 characters")
		self.password=pwd
		print("Password set successfully!...")

obj=PasswordManager()

try:
	password=input("Enter the password : ")
	confirm_pass=input("Enter the confirm password :")
	obj.set_password(password,confirm_pass)
except Exception as e:
	print("Error : ",e)