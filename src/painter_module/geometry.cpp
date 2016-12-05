#include <painter_module/geometry.hpp>
#include <widget_module/widget.hpp>

namespace mcurses {
class Size_policy;

void
Geometry::set_width_hint(unsigned width_hint) {
	width_hint_ = width_hint;
	auto parent = dynamic_cast<Widget*>(widget_->parent());
	if(parent) {
		parent->update();
	}
}

void
Geometry::set_height_hint(unsigned height_hint) {
	height_hint_ = height_hint;
	auto parent = dynamic_cast<Widget*>(widget_->parent());
	if(parent) {
		parent->update();
	}
}

void
Geometry::set_max_width(unsigned max_width) {
	max_width_ = max_width;
	auto parent = dynamic_cast<Widget*>(widget_->parent());
	if(parent) {
		parent->update();
	}
}

void
Geometry::set_max_height(unsigned max_height) {
	max_height_ = max_height;
	auto parent = dynamic_cast<Widget*>(widget_->parent());
	if(parent) {
		parent->update();
	}
}

void
Geometry::set_min_width(unsigned min_width) {
	min_width_ = min_width;
	auto parent = dynamic_cast<Widget*>(widget_->parent());
	if(parent) {
		parent->update();
	}
}

void
Geometry::set_min_width_hint(unsigned min_width_hint) {
	min_width_hint_ = min_width_hint;
	auto parent = dynamic_cast<Widget*>(widget_->parent());
	if(parent) {
		parent->update();
	}
}

void
Geometry::set_min_height(unsigned min_height) {
	min_height_ = min_height;
	auto parent = dynamic_cast<Widget*>(widget_->parent());
	if(parent) {
		parent->update();
	}
}

void
Geometry::set_min_height_hint(unsigned min_height_hint) {
	min_height_hint_ = min_height_hint;
	auto parent = dynamic_cast<Widget*>(widget_->parent());
	if(parent) {
		parent->update();
	}
}

void
Geometry::set_size_policy(const Size_policy& policy) {
	size_policy_ = policy;
	auto parent = dynamic_cast<Widget*>(widget_->parent());
	if(parent) {
		parent->update();
	}
}

} // namespace mcurses