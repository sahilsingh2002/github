import pyautogui, time
time.sleep(5)
x="@valorant"
for i in range (1,101):

    y=str(i)
    a=y+x
    #pyautogui.typewrite(str(i))
    pyautogui.typewrite(x)
    pyautogui.press("enter")