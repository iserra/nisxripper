#ifndef MACSA_RIPPERS_NISX_OBJECT_H
#define MACSA_RIPPERS_NISX_OBJECT_H

#include <string>

namespace Macsa {
	namespace Nisx {

		struct Pos
		{
			double x;
			double y;
		};

		struct Size
		{
			double width;
			double height;
		};

		class NisxObject
		{
			public:
				NisxObject(const std::string& name);
				virtual ~NisxObject();

				inline Pos position() const { return _position;}
				inline void setPosition(const Pos &position) { _position = position;}
				inline void setPosition(double x, double y) { _position.x = x; _position.y = y;}


				inline std::string name() const { return _name;}
				inline void setName(const std::string &name) { _name = name;}

			protected:
				std::string _name;
				Pos		_position;
				Size	_size;
		};
	}
}


#endif //MACSA_RIPPERS_NISX_OBJECT_H
