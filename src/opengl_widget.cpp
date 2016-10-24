/* ---------------------------------------------------------------- *
   Author: Kuumies <kuumies@gmail.com>
   Desc:   Implementation of kuu::opengl::Widget class.
 * ---------------------------------------------------------------- */

#include "opengl_widget.h"
#include "opengl_renderer_object.h"

namespace kuu
{
namespace opengl
{

/* ---------------------------------------------------------------- *
   The data of the widget.
 * ---------------------------------------------------------------- */
struct Widget::Data
{
    RendererObject::Ptr renderer;
};

/* ---------------------------------------------------------------- *
   Constructs the widget.
 * -----------------------------------------------------------------*/
Widget::Widget()
    : d(std::make_shared<Data>())
{}

/* ---------------------------------------------------------------- *
   Paint event needs to be overridden for rendering to work.
 * -----------------------------------------------------------------*/
void Widget::paintEvent(QPaintEvent* e)
{}

} // namespace opengl
} // namespace kuu
