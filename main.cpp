#include <iostream>
using namespace std;

int main()
{
	// image dimensions
	int image_height = 256;
	int image_width = 256;
	
	// render the image
	std::cout << "P3\n" << image_height << ' ' << image_width << "\n255\n";
	
	for (int i = 0; i < image_height; ++i)
	{
		for (int j = 0; j < image_width; ++j)
		{
			auto r = double(j) / (image_width - 1);
			auto g = double(i) / (image_height - 1);
			auto b = 0;

			int ir = static_cast<int>(255.999 * r);
			int ig = static_cast<int>(255.999 * g);
			int ib = static_cast<int>(255.999 * b);

			std::cout << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}

	return 0;
}