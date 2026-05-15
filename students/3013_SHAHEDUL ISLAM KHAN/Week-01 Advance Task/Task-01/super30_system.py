import time

print(" SUPER30 ATTENDANCE SYSTEM ")

valid_password = "3030"
attempts = 0
max_attempts = 3
is_access_granted = False

while attempts < max_attempts:
    
    entered_pwd = input(f"\nEnter Password (Attempt {attempts + 1}/{max_attempts}): ")
    
    if entered_pwd == valid_password:
        is_access_granted = True
        break
    else:
        attempts += 1
        remaining = max_attempts - attempts
        if remaining > 0:
            print(f"[!] Incorrect. You have {remaining} attempts left.")
        else:
            print("[!] System Locked. Too many failed attempts.")


if is_access_granted:
    print("\n--- Access granted: Weekly report ---")
    
    classes_attended = 0
    
    
    for day in range(1, 6):
        response = input(f"Day {day}: Did you attend class? (y/n): ").strip().lower()
        if response == 'y':
            classes_attended += 1
        elif response != 'n':
            # Fallback if user types something random
            pass 

    total_marks = 0
    
    base_score = classes_attended * 1 
    total_marks += base_score
    
    if classes_attended == 5:
        total_marks += 5
        print("> Excellent! +5 Marks awarded for perfection.")
    else:
        total_marks -= 3
        print("> Oops! -3 Marks applied for absence.")

    task_done = input("\nDid you submit your tasks? (y/n): ").strip().lower()
    if task_done == 'y':
        total_marks += 10
        print("> Great job! +10 Marks for tasks.")
    elif task_done == 'n':
        total_marks -= 10
        print("> Missing tasks! -10 Marks deducted.")
        
    
    print(f"Total score for the week: {total_marks}")
else:
    print("\nProgram failed.")