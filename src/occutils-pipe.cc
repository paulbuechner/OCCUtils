#include "occutils/occutils-pipe.h"

#include <BRepOffsetAPI_MakePipe.hxx>

namespace occutils::pipe {

TopoDS_Shape FromSplineAndProfile(const TopoDS_Wire& wire,
                                  const TopoDS_Shape& profile) {
  BRepOffsetAPI_MakePipe makePipe(wire, profile);
  makePipe.Build();
  return makePipe.Shape();
}

}  // namespace occutils::pipe
