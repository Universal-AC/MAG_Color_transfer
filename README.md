# C++ project, color transfer, magistère de Physique d'Orsay.

![alt text](https://github.com/Universal-AC/MAG_Color_transfer/blob/master/preview.png?raw=true)

<div align="center"> <em>From left to right, the source image, the target image and the image obtained via the script.</em> </div>



C++ program to transfer color from an image to another using a target image (only works for BMP 24 images). The method is depicted in [Color Transfer between Images](https://www.cs.tau.ac.il/~turkel/imagepapers/ColorTransfer.pdf). We included two programs. C++ script can be found in the ***color_transfer_v2*** folder, under the name of transfert (please note that color_transfer_v1 is deprecated). The Python script is located in the Python folder.

Features provided in the repository:

* A *matrix class*, with a product method and a transpose method, as well as a display method. By default, matrix objects are built with zeros. One can modify the components of the matrix by doing ``matrix.tab[0][0]`` for instance.
* A *pixel class*, which inherits from the matrix class (each pixel is a 3x1 matrix). This class comes with four methods, **LMS**, **LAB**, **back_to_LMS_from_LAB** and **back_to_RGB_from_LMS** which allow to do transformations of the colorimetric space. It also comes with methods to enhance to comprehension of the code. Indeed, one can get the R(Ll) (respectively G(Ma), B(Sb)) component of the pixel by using the **R(Ll)** method (respectively G(Ma), B(Sb)).
* A *bmp_io class*, with some various methods to manipulate Bitmap images, such as **write**, **pixel_data** to recover the data of the image, **width** and **height** to get the size of the image.
* A *image class*, which comes with a constructor based on the reading method of the bmp24 class, a **go_to_LAB** method to go to the lαβ space. We also automated the relevant statistical methods such as the mean or the standard deviation on each canal with **mean** and **std** methods, which return a pixel object filled with the stats.
* A Python file, which realises the same task as the C++ executable. It allowed us to compare the two outpouts.

For the users:

* To successfully use the scripts, compile ***main.cpp*** with ***matrix.cpp***, ***pixel.cpp***, ***image.cpp*** and ***bmp_io.cc***. Type:
>``$ sh transfert.sh``

in your terminal and a ***transfert*** executable will appear in your folder.

* Then, execute the executable with three arguments, the first one is **the source file**, the image that will be transfered. The second argument is the colorimetric **target** image. For instance, 
>``$ ./transfert source.bmp cible.bmp out.bmp``.
* The second program is a Python script which realises the same tasks using numpy and PIL. To use it, just put the **source.bmp** and **cible.bmp** in the Python folder and use the command line : 
>`` $ python3 color_transfer.py ``.

It will generate a **out.bmp** file (you can change these files by changing the Python script, don't forget to do it).

We summed up all these informations in the following class diagram:

![alt text](https://github.com/Universal-AC/MAG_Color_transfer/blob/master/diag.png?raw=true)
