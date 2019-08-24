void gdClipSetAdd(gdImagePtr im, gdClipRectanglePtr rect) {
  gdClipRectanglePtr more;
  if (im->clip == 0) {
    /* ... */
  }
  if (im->clip->count == im->clip->max) {
    more = gdRealloc (im->clip->list,(im->clip->max + 8) *
                      sizeof (gdClipRectangle));
    if (more == 0) return;
    im->clip->max += 8;
    im->clip->list = more;
  }
  im->clip->list[im->clip->count] = *rect;
  im->clip->count++;
 
}
