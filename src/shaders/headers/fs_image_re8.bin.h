static const uint8_t fs_image_re8_glsl[341] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x74, 0x65, 0x78, // FSH.o.><...u_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x35, 0x01, 0x00, 0x00, 0x76, // Color......5...v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // arying highp vec
	0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, // 2 v_texcoord0;.u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, // niform sampler2D
	0x20, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, //  u_texColor;.voi
	0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, // d main ().{.  lo
	0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // wp vec4 tmpvar_1
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x74, // ;.  tmpvar_1 = t
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, // exture2D (u_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // olor, v_texcoord
	0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, // 0);.  lowp vec3 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_2;.  tmpv
	0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x28, 0x74, 0x6d, 0x70, // ar_2 = vec3((tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x65, 0x78, 0x70, 0x32, 0x28, 0x28, // var_1.x * exp2((
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, // .    (tmpvar_1.w
	0x20, 0x2a, 0x20, 0x32, 0x35, 0x35, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x31, //  * 255.0).   - 1
	0x32, 0x38, 0x2e, 0x30, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, // 28.0))));.  gl_F
	0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x74, // ragColor.xyz = t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, // mpvar_2;.  gl_Fr
	0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // agColor.w = 1.0;
	0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                                   // .}...
};
static const uint8_t fs_image_re8_dx9[289] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x14, 0x01, 0x00, 0x03, 0xff, 0xff, // FSH.o.><........
	0xfe, 0xff, 0x23, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, // ..#.CTAB....S...
	0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, // ................
	0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, // L...0...........
	0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // <.......u_texCol
	0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, // or..............
	0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, // ....ps_3_0.Micro
	0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, // soft (R) HLSL Sh
	0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, // ader Compiler 9.
	0x33, 0x30, 0x2e, 0x39, 0x32, 0x30, 0x30, 0x2e, 0x31, 0x36, 0x33, 0x38, 0x34, 0x00, 0xab, 0xab, // 30.9200.16384...
	0x51, 0x00, 0x00, 0x05, 0x00, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x7f, 0x43, 0x00, 0x00, 0x00, 0xc3, // Q..........C....
	0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, // ...?............
	0x00, 0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x90, 0x00, 0x08, 0x0f, 0xa0, // ................
	0x42, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x90, 0x00, 0x08, 0xe4, 0xa0, // B...............
	0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0xa0, // ................
	0x00, 0x00, 0x55, 0xa0, 0x0e, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, // ..U...........U.
	0x05, 0x00, 0x00, 0x03, 0x00, 0x08, 0x07, 0x80, 0x00, 0x00, 0x55, 0x80, 0x00, 0x00, 0x00, 0x80, // ..........U.....
	0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x08, 0x80, 0x00, 0x00, 0xaa, 0xa0, 0xff, 0xff, 0x00, 0x00, // ................
	0x00,                                                                                           // .
};
static const uint8_t fs_image_re8_dx11[420] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x94, 0x01, 0x44, 0x58, 0x42, 0x43, // FSH.o.><....DXBC
	0x53, 0xc7, 0x60, 0x12, 0x49, 0x32, 0xca, 0x62, 0xc9, 0xce, 0x9b, 0x45, 0xe1, 0xbe, 0x42, 0x96, // S.`.I2.b...E..B.
	0x01, 0x00, 0x00, 0x00, 0x94, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, // ............,...
	0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, // ........ISGNP...
	0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........8.......
	0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, // ................
	0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // D...............
	0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, // ........SV_POSIT
	0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, // ION.TEXCOORD....
	0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // OSGN,...........
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, //  ...............
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, // ........SV_TARGE
	0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xd4, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, // T...SHDR....@...
	0x35, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // 5...Z....`......
	0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, // X....p......UU..
	0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, // b...2.......e...
	0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, // . ......h.......
	0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, // E...........F...
	0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, // ....F~.......`..
	0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....2...".......
	0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x43, // :........@.....C
	0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x19, 0x00, 0x00, 0x05, 0x22, 0x00, 0x10, 0x00, // .@.........."...
	0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, // ............8...
	0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // r ......V.......
	0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x20, 0x10, 0x00, // ........6.... ..
	0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x3e, 0x00, 0x00, 0x01, // .....@.....?>...
	0x00, 0x00, 0x00, 0x00,                                                                         // ....
};
