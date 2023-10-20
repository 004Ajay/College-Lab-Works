# Rembg - Image background remover tool in Python

Install rembg

    pip install rembg

#### → Input image format - supports most formats, but prefer jpg, jpeg or png
#### → Output format - png

---

## Sample Output:

| Image with bg        | Image without bg       |
| :-------------: |:-------------:|
| <img src="image.jpeg" title = "Image with bg" width = "300" height="300">      | <img src="image_without_bg.jpeg" title = "Image without bg" width = "300" height="300"> |

#### [Image source](https://thispersondoesnotexist.com/) 

<br>

## _Write these commands in [Command Prompt](https://www.google.com/search?q=Windows+Command+Prompt&rlz=1C1CHBF_enIN998IN998&sourceid=chrome&ie=UTF-8)_

### rembg `i` - For local images

* Used when input and output are files.

Remove the background from a local file

    rembg i "path/to/input.png" "path/to/output.png"

_Sample code:_

    rembg i "C:\AJAY\image.jpeg" "C:\AJAY\image_without_bg.png"


Remove the background specifying a model

    rembg i -m u2netp "path/to/input.png" "path/to/output.png"

<!--

Remove the background returning only the mask

```
rembg i -om path/to/input.png path/to/output.png
```

Remove the background applying an alpha matting

```
rembg i -a path/to/input.png path/to/output.png
```
-->

<br>

---

### rembg `p` - For multiple images in a folder

* Used when input and output are folders.

Remove the background from all images in a folder

    rembg p "path/to/input" "path/to/output"


Same as before, but watching for new/changed files to process

    rembg p -w "path/to/input" "path/to/output"


### rembg `s`

* Used to start http server.

Remove the background from an image url

    curl -s "http://localhost:5000/?url=http://input.png" -o "output.png"



#### Rembg official [GitHub](https://github.com/danielgatis/rembg)