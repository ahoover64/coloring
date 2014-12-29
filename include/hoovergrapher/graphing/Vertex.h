#ifndef __VERTEX_H__
#define __VERTEX_H__

#include <memory>
#include "hoovergrapher/coloring/Color.h"

namespace hoovergrapher {
  namespace graphing {
    class Vertex {
    public:
      // Canonical Form
      Vertex();
      Vertex(int n);
      Vertex(const coloring::Color &, int n);
      Vertex(const Vertex &);
      Vertex operator=(const Vertex &);
      ~Vertex();
      bool operator==(const Vertex &);

      // Used for coloring graphs
      void color(const coloring::Color &);
      coloring::Color color() const;

    private:
      class Impl;
      std::shared_ptr<Impl> mImpl;
    };
  }
}

#endif // __VERTEX_H__
