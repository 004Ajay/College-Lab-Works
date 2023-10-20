import youtube_dl

# Please give URL & Output name for youtube video
video_url = input("Video URL: ")
output_name = input("Output filename: ")

ydl_opts = { # define the options for downloading
        'format': 'bestaudio/best',
        'outtmpl': f'{output_name}.mp3',
        'postprocessors': [{
            'key': 'FFmpegExtractAudio',
            'preferredcodec': 'mp3',
            'preferredquality': '192',
        }],
    }

with youtube_dl.YoutubeDL(ydl_opts) as ydl:
    ydl.download([video_url])