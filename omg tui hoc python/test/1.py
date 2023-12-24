def create_email_and_password(full_name, dob, email_count):
    name_parts = full_name.strip().split()
    last_name = name_parts[-1].lower()
    first_name = ''.join([name[0].lower() for name in name_parts[:-1]])
    day, month, year = dob.split('/')
    day = day.lstrip('0')
    month = month.lstrip('0')

    maildau = f"{last_name}{first_name}"
    base_email = maildau + "@xyz.edu.vn"
    count = email_count.get(maildau, 0)
    
    if count > 0:
        email = f"{maildau}{count}@xyz.edu.vn"
    else:
        email = base_email

    email_count[maildau] = count + 2

    password = f"{day}{month}{year}"
    return email, password

N = int(input())
email_count = {}
results = []

for _ in range(N):
    full_name, dob = input().rsplit(None, 1)
    email, password = create_email_and_password(full_name, dob, email_count)
    results.append((email, password))

for email, password in results:
    print(email)
    print(password)
