const Collision col_Moving_Rotating_Block_MOP_0x7e3ea0[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-324, 66, 324),
	COL_VERTEX(324, 67, -325),
	COL_VERTEX(-325, 67, -324),
	COL_VERTEX(325, 66, 324),
	COL_VERTEX(-324, -13, 324),
	COL_VERTEX(325, -13, 324),
	COL_VERTEX(324, -12, -325),
	COL_VERTEX(-325, -12, -324),
	COL_TRI_INIT(SURFACE_NOT_SLIPPERY, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(1, 0, 3),
	COL_TRI(4, 3, 0),
	COL_TRI(3, 4, 5),
	COL_TRI(4, 6, 5),
	COL_TRI(6, 4, 7),
	COL_TRI(4, 2, 7),
	COL_TRI(2, 4, 0),
	COL_TRI(1, 7, 2),
	COL_TRI(7, 1, 6),
	COL_TRI(1, 5, 6),
	COL_TRI(5, 1, 3),
	COL_TRI_STOP(),
	COL_END()
};
