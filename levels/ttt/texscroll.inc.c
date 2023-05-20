void scroll_gfx_mat_ttt_dl_Ocean_Water_layer5() {
	Gfx *mat = segmented_to_virtual(mat_ttt_dl_Ocean_Water_layer5);


	shift_s(mat, 11, PACK_TILESIZE(0, 1));
	shift_s(mat, 13, PACK_TILESIZE(0, 1));
	shift_t(mat, 13, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_ttt_dl_Quicksand_layer1() {
	Gfx *mat = segmented_to_virtual(mat_ttt_dl_Quicksand_layer1);


	shift_s(mat, 15, PACK_TILESIZE(0, 1));
	shift_t(mat, 15, PACK_TILESIZE(0, 1));
	shift_s_down(mat, 17, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_ttt_dl_Sand_layer1() {
	Gfx *mat = segmented_to_virtual(mat_ttt_dl_Sand_layer1);

	shift_s(mat, 15, PACK_TILESIZE(0, 1));

};

void scroll_ttt() {
	scroll_gfx_mat_ttt_dl_Ocean_Water_layer5();
	scroll_gfx_mat_ttt_dl_Quicksand_layer1();
	scroll_gfx_mat_ttt_dl_Sand_layer1();
};
