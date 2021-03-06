#ifndef _IMAGE_H_
#define _IMAGE_H_
#include"pixel.h"
class image : public matrix
{
 private :
 	int width;
 	int height;
 public :
 	pixel **tab;
 	image(unsigned char const * const image_, size_t width_, size_t height_);
 	~image();
 	int get_width() const;
  	int get_height() const;
	void set_width(const int width_);
	void set_height(const int height_);
	void go_to_LAB() const;
	void go_to_RGB() const;
	pixel mean() const;
	pixel std() const;
};
#endif //_HEADER_FILE_H_
