# Level 1 - Login Validation (Python)

# Correct credentials
correct_username = "adminKE"
correct_password = "254Secure"

# Ask user for input
username = input("Enter username: ")
password = input("Enter password: ")

# Check credentials
if username == correct_username and password == correct_password:
    print("Access Granted")
else:
    print("Invalid Credentials")