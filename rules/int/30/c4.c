pen->num_vertices = _cairo_pen_vertices_needed(
  gstate->tolerance, radius, &gstate->ctm
);
 
if (pen->num_vertices > SIZE_MAX / sizeof(cairo_pen_vertex_t)) {
  /* Handle error */
}
pen->vertices = malloc(
  pen->num_vertices * sizeof(cairo_pen_vertex_t)
);
