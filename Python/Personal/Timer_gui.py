# Timer with GUI in python with start, stop, pause, resume & reset functionality 

import tkinter as tk
from tkinter import ttk

class CountdownTimer(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Countdown Timer")
        self.geometry("300x200")
        self.resizable(False, False)
        self.configure(background="white")
        self.countdown_time = tk.StringVar()
        self.countdown_time.set("00:00:00")
        self.remaining_time = 0
        self.countdown_running = False
        self.time_frame = ttk.Frame(self)
        self.time_frame.pack(padx=10, pady=10)
        self.time_label = ttk.Label(self.time_frame, textvariable=self.countdown_time, font=("Helvetica", 40))
        self.time_label.pack()
        self.button_frame = ttk.Frame(self)
        self.button_frame.pack(padx=10, pady=10)
        self.start_button = ttk.Button(self.button_frame, text="Start", command=self.start_countdown)
        self.start_button.grid(row=0, column=0, padx=5, pady=5)
        self.stop_button = ttk.Button(self.button_frame, text="Stop", command=self.stop_countdown)
        self.stop_button.grid(row=0, column=1, padx=5, pady=5)
        self.reset_button = ttk.Button(self.button_frame, text="Reset", command=self.reset_countdown)
        self.reset_button.grid(row=0, column=2, padx=5, pady=5)
        self.entry_frame = ttk.Frame(self)
        self.entry_frame.pack(padx=10, pady=10)
        self.entry_label = ttk.Label(self.entry_frame, text="Enter Time in Seconds:")
        self.entry_label.grid(row=0, column=0, padx=5, pady=5)
        self.entry_box = ttk.Entry(self.entry_frame, width=10)
        self.entry_box.grid(row=0, column=1, padx=5, pady=5)
        self.set_button = ttk.Button(self.entry_frame, text="Set", command=self.set_countdown)
        self.set_button.grid(row=0, column=2, padx=5, pady=5)
        self.protocol("WM_DELETE_WINDOW", self.on_closing)

    def start_countdown(self):
        if self.countdown_running:
            return
        self.countdown_running = True
        self.perform_countdown()

    def stop_countdown(self):
        self.countdown_running = False

    def reset_countdown(self):
        self.stop_countdown()
        self.remaining_time = 0
        self.countdown_time.set("00:00:00")

    def set_countdown(self):
        self.remaining_time = int(self.entry_box.get())

    def perform_countdown(self):
        if self.remaining_time <= 0:
            self.reset_countdown()
            return
        if not self.countdown_running:
            return
        m, s = divmod(self.remaining_time, 60)
        h, m = divmod(m, 60)
        self.countdown_time.set("{:02d}:{:02d}:{:02d}".format(h, m, s))
        self.remaining_time = self.remaining_time - 1
        self.after(1000, self.perform_countdown)

    def on_closing(self):
        self.destroy()

if __name__ == "__main__":
    app = CountdownTimer()
    app.mainloop()