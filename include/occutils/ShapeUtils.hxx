#pragma once
/**
 * Utilities for dissecting shapes into their components.
 */
#include <TopoDS_Shape.hxx>

namespace OCCUtils {
    namespace ShapeUtils {
        /**
         * @return true if the given shape is a TopoDS_Solid
         */
        bool IsSolid(const TopoDS_Shape& shape);
        /**
         * @return true if the given shape is a TopoDS_Face
         */
        bool IsFace(const TopoDS_Shape& shape);
        /**
         * @return true if the given shape is a TopoDS_Edge
         */
        bool IsEdge(const TopoDS_Shape& shape);
        /**
         * @return true if the given shape is a TopoDS_Wire
         */
        bool IsWire(const TopoDS_Shape& shape);
        /**
         * @return true if the given shape is a TopoDS_Vertex
         */
        bool IsVertex(const TopoDS_Shape& shape);
    }
}