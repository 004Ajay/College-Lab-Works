import win32api
import win32gui
from playsound import playsound

WM_APPCOMMAND = 0x319

# setting current volume + 50point up
for i in range(25): # running 25 times means increasing volume by 50 points, i.e, (no_of_times * 2 vol_points)
    vol_inc = 0xA0000 # Virtual-Key Code for increasing volume
    hwnd_active = win32gui.GetForegroundWindow() # Getting active window
    win32api.SendMessage(hwnd_active, WM_APPCOMMAND, None, vol_inc) # Executing command
    # APPCOMMAND_VOLUME_MUTE(8) (0xFFFF + 1) * 8 = 0x80000
    # APPCOMMAND_VOLUME_UP (10) (0xFFFF + 1) * 10 = 0xA0000
    
# playing sound    
playsound("path") # puth the path to your audio file inside (" ")