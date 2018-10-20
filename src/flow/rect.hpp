namespace flow {
	enum RectMode {
		SECTION = 0,
		FULL = 1
	};

	class Rect2 : public Point2, public Size2 {
		SDL_Rect sdl_representation;
	public:
		RectMode mode;

		Rect2(double x=0, double y=0, double w=0, double h=0, RectMode mode=FULL) : Point2(x, y), Size2(w, h) {
			this->mode = mode;
		};

		std::string to_string() {
			return "Rect2{x: "+std::to_string(this->x)+", y: "+std::to_string(this->y)+", w: "+std::to_string(this->w)+", h: "+std::to_string(this->h)+", "+(this->mode == SECTION ? "SECTION" : "FULL")+"}";
		}

		SDL_Rect* get_sdl_rect() {
			if(this->mode == SECTION) {
				this->sdl_representation.x = this->x;
				this->sdl_representation.y = this->y;
				this->sdl_representation.w = this->w;
				this->sdl_representation.h = this->h;
				return &this->sdl_representation;
			}
			return NULL;
		}
		//START

		/*Rect2 operator+(Rect2& other) {
			return Rect2(this->x + other.x, this->y + other.y, this->w + other.w, this->h + other.h, this->mode);
		}

		Rect2 operator-(Rect2& other) {
			return Rect2(this->x - other.x, this->y - other.y, this->w - other.w, this->h - other.h, this->mode);
		}

		Rect2 operator*(Rect2& other) {
			return Rect2(this->x * other.x, this->y * other.y, this->w * other.w, this->h *+ other.h, this->mode);
		}

		Rect2 operator/(Rect2& other) {
			return Rect2(this->x / other.x, this->y / other.y, this->w / other.w, this->h / other.h, this->mode);
		}

		void operator+=(Rect2& other) {
			this->x = this->x + other.x;
			this->y = this->y + other.y;
			this->w = this->w + other.w;
			this->h = this->h + other.h;
		}

		void operator-=(Rect2& other) {
			this->x = this->x - other.x;
			this->y = this->y - other.y;
			this->w = this->w - other.w;
			this->h = this->h - other.h;
		}

		void operator*=(Rect2& other) {
			this->x = this->x * other.x;
			this->y = this->y * other.y;
			this->w = this->w * other.w;
			this->h = this->h * other.h;
		}

		void operator/=(Rect2& other) {
			this->x = this->x / other.x;
			this->y = this->y / other.y;
			this->w = this->w / other.w;
			this->h = this->h / other.h;
		}

		Rect2 operator+(double val) {
			return Rect2(this->x + val, this->y + val, this->w + val, this->h + val, this->mode);
		}

		Rect2 operator-(double val) {
			return Rect2(this->x - val, this->y - val, this->w - val, this->h - val, this->mode);
		}

		Rect2 operator*(double val) {
			return Rect2(this->x * val, this->y * val, this->w * val, this->h * val, this->mode);
		}

		Rect2 operator/(double val) {
			return Rect2(this->x / val, this->y / val, this->w / val, this->h / val, this->mode);
		}

		void operator+=(double val) {
			this->x = this->x + val;
			this->y = this->y + val;
			this->w = this->w + val;
			this->h = this->h + val;
		}

		void operator-=(double val) {
			this->x = this->x - val;
			this->y = this->y - val;
			this->w = this->w - val;
			this->h = this->h - val;
		}

		void operator*=(double val) {
			this->x = this->x * val;
			this->y = this->y * val;
			this->w = this->w * val;
			this->h = this->h * val;
		}

		void operator/=(double val) {
			this->x = this->x / val;
			this->y = this->y / val;
			this->w = this->w / val;
			this->h = this->h / val;
		}*/
		//END

		//START2
		Rect2 operator+(Rect2& other) {
			return Rect2(this->x + other.x, this->y + other.y, this->w + other.w, this->h + other.h, this->mode);
		}

		Rect2 operator-(Rect2& other) {
			return Rect2(this->x - other.x, this->y - other.y, this->w - other.w, this->h - other.h, this->mode);
		}

		Rect2 operator*(Rect2& other) {
			return Rect2(this->x * other.x, this->y * other.y, this->w * other.w, this->h *+ other.h, this->mode);
		}

		Rect2 operator/(Rect2& other) {
			return Rect2(this->x / other.x, this->y / other.y, this->w / other.w, this->h / other.h, this->mode);
		}

		void operator+=(Rect2& other) {
			this->Point2::operator+=( *(Point2*)(&other) );
			this->Size2::operator+=( *(Size2*)(&other) );
		}

		void operator-=(Rect2& other) {
			this->x = this->x - other.x;
			this->y = this->y - other.y;
			this->w = this->w - other.w;
			this->h = this->h - other.h;
		}

		void operator*=(Rect2& other) {
			this->x = this->x * other.x;
			this->y = this->y * other.y;
			this->w = this->w * other.w;
			this->h = this->h * other.h;
		}

		void operator/=(Rect2& other) {
			this->x = this->x / other.x;
			this->y = this->y / other.y;
			this->w = this->w / other.w;
			this->h = this->h / other.h;
		}

		Rect2 operator+(double val) {
			return Rect2(this->x + val, this->y + val, this->w + val, this->h + val, this->mode);
		}

		Rect2 operator-(double val) {
			return Rect2(this->x - val, this->y - val, this->w - val, this->h - val, this->mode);
		}

		Rect2 operator*(double val) {
			return Rect2(this->x * val, this->y * val, this->w * val, this->h * val, this->mode);
		}

		Rect2 operator/(double val) {
			return Rect2(this->x / val, this->y / val, this->w / val, this->h / val, this->mode);
		}

		void operator+=(double val) {
			this->x = this->x + val;
			this->y = this->y + val;
			this->w = this->w + val;
			this->h = this->h + val;
		}

		void operator-=(double val) {
			this->x = this->x - val;
			this->y = this->y - val;
			this->w = this->w - val;
			this->h = this->h - val;
		}

		void operator*=(double val) {
			this->x = this->x * val;
			this->y = this->y * val;
			this->w = this->w * val;
			this->h = this->h * val;
		}

		void operator/=(double val) {
			this->x = this->x / val;
			this->y = this->y / val;
			this->w = this->w / val;
			this->h = this->h / val;
		}
		//END2

		void set_pos(const Point2& new_pos) {
			this->x = new_pos.x;
			this->y = new_pos.y;
		}

		void set_size(const Size2& new_size) {
			this->w = new_size.w;
			this->h = new_size.h;
		}

		void add_pos(Point2& other) {
			this->x += other.x;
			this->y += other.y;
		}

		void sub_pos(Point2& other) {
			this->x -= other.x;
			this->y -= other.y;
		}

		void mul_pos(Point2& other) {
			this->x *= other.x;
			this->y *= other.y;
		}

		void div_pos(Point2& other) {
			this->x /= other.x;
			this->y /= other.y;
		}

		void add_size(Size2& other) {
			this->w += other.w;
			this->h += other.h;
		}

		void sub_size(Size2& other) {
			this->w -= other.w;
			this->h -= other.h;
		}

		void mul_size(Size2& other) {
			this->w *= other.w;
			this->h *= other.h;
		}

		void div_size(Size2& other) {
			this->w /= other.w;
			this->h /= other.h;
		}
	};

	struct Rect : public Point, public Size {
	public:
		Rect(double x=0, double y=0, double z=0, double w=0, double h=0, double l=0) : Point(x, y, z), Size(w, h, l) {};

		std::string to_string() {
			return "Rect{x: "+std::to_string(this->x)+", y: "+std::to_string(this->y)+", z: "+std::to_string(this->z)+", w: "+std::to_string(this->w)+", h: "+std::to_string(this->h)+", l: "+std::to_string(this->l)+"}";
		}

		void add_val(double x) {
			this->x += x;
			this->y += x;
			this->z += x;
		}

		void sub_val(double x) {
			this->x -= x;
			this->y -= x;
			this->z -= x;
		}

		void mul_by_val(double x) {
			this->x *= x;
			this->y *= x;
			this->z *= x;
		}

		void div_by_val(double x) {
			this->x /= x;
			this->y /= x;
			this->z /= x;
		}

		void add_pos(Rect& other) {
			this->x += other.x;
			this->y += other.y;
			this->z += other.z;
		}

		void add_vector(Vector& other) {
			this->x += other.x;
			this->y += other.y;
			this->z += other.z;
		}

		void sub_pos(Rect& other) {
			this->x -= other.x;
			this->y -= other.y;
			this->z -= other.z;
		}

		void sub_vector(Vector& other) {
			this->x -= other.x;
			this->y -= other.y;
			this->z -= other.z;
		}

		void mul_pos(Rect& other) {
			this->x *= other.x;
			this->y *= other.y;
			this->z *= other.z;
		}

		void mul_by_vector(Vector& other) {
			this->x *= other.x;
			this->y *= other.y;
			this->z *= other.z;
		}

		void div_pos(Rect& other) {
			this->x /= other.x;
			this->y /= other.y;
			this->z /= other.z;
		}

		void div_by_vector(Vector& other) {
			this->x /= other.x;
			this->y /= other.y;
			this->z /= other.z;
		}

		void add_size(Rect& other) {
			this->w += other.w;
			this->h += other.h;
			this->l += other.l;
		}

		void sub_size(Rect& other) {
			this->w -= other.w;
			this->h -= other.h;
			this->l -= other.l;
		}

		void mul_size(Rect& other) {
			this->w *= other.w;
			this->h *= other.h;
			this->l *= other.l;
		}

		void mul_size_by_vector(Vector& other) {
			this->w *= other.x;
			this->h *= other.y;
			this->l *= other.z;
		}

		void div_size(Rect& other) {
			this->w /= other.w;
			this->h /= other.h;
			this->l /= other.l;
		}

		Rect2* to_rect2() {
			Rect2* result = new Rect2(this->x, this->y+this->z, this->w, this->h+this->l, SECTION);
			return result;
		}

		Rect2* to_scaled_rect2(Vector scale) {
			Rect2* result = new Rect2(this->x, this->y+this->z, this->w*scale.x, (this->h*scale.y)+(this->l*scale.z), SECTION);
			return result;
		}

		void set_pos(const Point& new_pos) {
			this->x = new_pos.x;
			this->y = new_pos.y;
			this->z = new_pos.z;
		}

		void set_size(const Size& new_size) {
			this->w = new_size.w;
			this->h = new_size.h;
			this->l = new_size.l;
		}

		bool is_colliding(Rect& other) {
			return this->x < other.x + other.w && this->x + this->w > other.x && this->y < other.y + other.h && this->y + this->h > other.y && this->z < other.z + other.l && this->z + this->l > other.z;
		}

		bool is_colliding_with_point(Point& pt) {
			bool is_x_collision = this->x<=pt.x && this->x+this->w>=pt.x;
			bool is_y_collision = this->y<=pt.y && this->y+this->h>=pt.y;
			bool is_z_collision = this->z<=pt.z && this->z+this->l>=pt.z;
			return is_x_collision && is_y_collision && is_z_collision;
		}

		bool is_in_xy_collision(Rect& other) {
			return this->x < other.x + other.w && this->x + this->w > other.x && this->y < other.y + other.h && this->y + this->h > other.y;
		}

		bool is_in_xz_collision(Rect& other) {
			return this->x < other.x + other.w && this->x + this->w > other.x && this->z < other.z + other.l && this->z + this->l > other.z;
		}
	};
}