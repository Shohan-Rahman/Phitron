import pyautogui
from time import sleep

n = int(input())
sleep(7)
for i in range(0,n):
    for j in range(0,i+1):
        pyautogui.write('#', interval=0.30)
    pyautogui.press('enter')



