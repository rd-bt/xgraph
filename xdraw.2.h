
#define graph_size(gp) (*(uint32_t *)((gp)->buf-54+2))
#define graph_tobmp(gp) ((gp)->buf-54)
#define graph_tobmp(gp) ((gp)->buf-54)
#define graph_colorat(gp,x,y) ((gp)->buf[(y)*(gp)->byte_width+(x)*(gp)->bpp])
#endif
