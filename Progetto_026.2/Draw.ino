//LOGO TERMOMETRO
const uint8_t LG_Tmp[] PROGMEM = {
0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xF9, 0xE0,
0x00, 0x00, 0x00, 0x01, 0xE0, 0x70, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x70, 0x00, 0x00, 0x00, 0x03,
0x80, 0x39, 0xFC, 0x00, 0x00, 0x03, 0x80, 0x39, 0xFC, 0x00, 0x00, 0x03, 0x80, 0x38, 0x00, 0x00,
0x00, 0x03, 0x80, 0x38, 0x00, 0x00, 0x00, 0x03, 0x80, 0x38, 0x00, 0x00, 0x00, 0x03, 0x80, 0x39,
0xFC, 0x00, 0x00, 0x03, 0x80, 0x39, 0xFC, 0x00, 0x00, 0x03, 0x8E, 0x38, 0x00, 0x00, 0x00, 0x03,
0x9F, 0x38, 0x00, 0x00, 0x00, 0x03, 0x9F, 0x39, 0xFC, 0x00, 0x00, 0x03, 0x9F, 0x39, 0xFC, 0x00,
0x00, 0x03, 0x9F, 0x39, 0xFC, 0x00, 0x00, 0x03, 0x9F, 0x38, 0x00, 0x00, 0x00, 0x03, 0x9F, 0x38,
0x00, 0x00, 0x00, 0x03, 0x9F, 0x39, 0xFC, 0x00, 0x00, 0x03, 0x9F, 0x39, 0xFC, 0x00, 0x00, 0x03,
0x9F, 0x39, 0xFC, 0x00, 0x00, 0x03, 0x9F, 0x38, 0x00, 0x00, 0x00, 0x03, 0x9F, 0x38, 0x00, 0x00,
0x00, 0x03, 0x9F, 0x39, 0xFC, 0x00, 0x00, 0x03, 0x9F, 0x39, 0xFC, 0x00, 0x00, 0x03, 0x9F, 0x38,
0x00, 0x00, 0x00, 0x07, 0x9F, 0x3C, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x1E, 0x00, 0x00, 0x00, 0x1E,
0x3F, 0x87, 0x00, 0x00, 0x00, 0x1C, 0x7F, 0xC7, 0x00, 0x00, 0x00, 0x38, 0xFF, 0xE3, 0x80, 0x00,
0x00, 0x39, 0xFF, 0xF3, 0x80, 0x00, 0x00, 0x31, 0xFF, 0xF1, 0x80, 0x00, 0x00, 0x73, 0xFF, 0xF9,
0xC0, 0x00, 0x00, 0x73, 0xFF, 0xF9, 0xC0, 0x00, 0x00, 0x73, 0xFF, 0xF9, 0xC0, 0x00, 0x00, 0x73,
0xFF, 0xF9, 0xC0, 0x00, 0x00, 0x31, 0xFF, 0xF1, 0x80, 0x00, 0x00, 0x39, 0xFF, 0xF1, 0x80, 0x00,
0x00, 0x38, 0xFF, 0xE3, 0x80, 0x00, 0x00, 0x1C, 0x7F, 0xC7, 0x00, 0x00, 0x00, 0x1E, 0x3F, 0x87,
0x00, 0x00, 0x00, 0x0F, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x07, 0x80, 0x3C, 0x00, 0x00, 0x00, 0x03,
0xF1, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00
};

//LOGO PRESSIONE
const uint8_t LG_Prs[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00,
0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3F, 0xC0, 0x03, 0xFC, 0x00, 0x00, 0x7E, 0x03, 0xC0,
0x7E, 0x00, 0x00, 0xF8, 0x03, 0xC0, 0x1F, 0x00, 0x01, 0xF0, 0x03, 0xC0, 0x0F, 0x80, 0x03, 0xE6,
0x03, 0xC0, 0x67, 0xC0, 0x07, 0xCE, 0x03, 0xC0, 0x73, 0xE0, 0x0F, 0x8F, 0x03, 0xC0, 0xF1, 0xF0,
0x0F, 0x07, 0x83, 0xC1, 0xE0, 0xF0, 0x1E, 0x07, 0xC0, 0x03, 0xE0, 0x78, 0x1C, 0x03, 0xC0, 0x03,
0xC0, 0x38, 0x3C, 0x01, 0x80, 0x01, 0x80, 0x3C, 0x38, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x78, 0x00,
0x00, 0x00, 0x00, 0x1E, 0x7B, 0x80, 0x01, 0x80, 0x01, 0xDE, 0x73, 0xF0, 0x01, 0x80, 0x0F, 0xCE,
0x73, 0xF8, 0x01, 0x80, 0x1F, 0xCE, 0xF1, 0xF8, 0x01, 0x80, 0x1F, 0x8F, 0xF0, 0x30, 0x01, 0x80,
0x0C, 0x0F, 0xE0, 0x00, 0x01, 0x80, 0x00, 0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 0x00,
0x03, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 0x07, 0xF0, 0x00, 0x03, 0xC0, 0x00, 0x0F,
0xF0, 0xF0, 0x03, 0xC0, 0x0F, 0x0F, 0xF3, 0xF8, 0x07, 0xE0, 0x1F, 0xCF, 0x73, 0xF8, 0x0F, 0xF0,
0x1F, 0xCE, 0x73, 0xC0, 0x1F, 0xF8, 0x03, 0xCE, 0x78, 0x00, 0x1F, 0xF8, 0x00, 0x1E, 0x38, 0x00,
0x1F, 0xF8, 0x00, 0x1C, 0x38, 0x00, 0x1F, 0xF8, 0x00, 0x1C, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00,
0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

//LOGO INTRODUTTIVO PEOPLEM
const unsigned char LG_Intro [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xc0, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xc0, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0xff, 0xfc, 0x00, 0x7f, 0xff, 0xff, 0xff, 
	0xc0, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0xff, 0xe0, 0x00, 0x0f, 0xff, 0xff, 0xff, 
	0xc0, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0xff, 0xc0, 0x00, 0x07, 0xff, 0xff, 0xff, 
	0xc0, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0xff, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 
	0xc0, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0xfe, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 
	0xc0, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0xfc, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
	0xc0, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 
	0xc0, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0xf8, 0x00, 0x7c, 0x00, 0x3f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xf8, 0x01, 0xff, 0x00, 0x3f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xf0, 0x03, 0xff, 0x80, 0x3f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xf0, 0x07, 0xff, 0xc0, 0x1f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xf0, 0x07, 0xff, 0xc0, 0x1f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xf0, 0x07, 0xff, 0xc0, 0x1f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xf0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xf0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xf8, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xc8, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xf8, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xcc, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xcf, 0x8f, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 
	0xc3, 0x0f, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xff, 0x00, 0x7f, 0x3f, 0xff, 0xff, 0xff, 
	0xca, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xff, 0x80, 0x7e, 0x0f, 0xff, 0xff, 0xff, 
	0xca, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xc0, 0xfe, 0x03, 0xff, 0xff, 0xff, 
	0xca, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xf0, 0xfc, 0x01, 0xff, 0xff, 0xff, 
	0xcf, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xfd, 0xfc, 0x00, 0xff, 0xff, 0xff, 
	0xcf, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xf8, 0x00, 0x7f, 0xff, 0xff, 
	0xcf, 0x8f, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x7f, 0xff, 0xff, 
	0xcf, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xff, 
	0xc1, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 
	0xcf, 0x8f, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 
	0xce, 0x0f, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xc0, 0x1f, 0xff, 0xff, 
	0xcf, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xc0, 0x1f, 0xff, 0xff, 
	0xc0, 0x0f, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xc0, 0x1f, 0xff, 0xff, 
	0xcf, 0x0f, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xc0, 0x1f, 0xff, 0xff, 
	0xcf, 0x8f, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xf0, 0x07, 0xff, 0x80, 0x3f, 0xff, 0xff, 
	0xc0, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xf0, 0x03, 0xff, 0x00, 0x3f, 0xff, 0xff, 
	0xc0, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xf0, 0x00, 0x38, 0x00, 0x3f, 0xff, 0xff, 
	0xcf, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 
	0xcf, 0x0f, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 
	0xcc, 0x8f, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
	0xcd, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xff, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 
	0xc8, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xc0, 0x00, 0x07, 0xff, 0xff, 0xff, 
	0xc8, 0xcf, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xf0, 0x00, 0x1f, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xc0, 0x07, 0x80, 0x1c, 0xff, 0x80, 0x3e, 0x00, 0x78, 0x01, 0x80, 0x1e, 0x00, 0x7f, 0xff, 0xff, 
	0xc0, 0x03, 0x80, 0x18, 0x7f, 0x00, 0x1c, 0x00, 0x30, 0x01, 0x80, 0x0c, 0x00, 0x3f, 0xff, 0xff, 
	0xc0, 0x03, 0x8f, 0xf8, 0x7f, 0x00, 0x1c, 0x3c, 0x3f, 0xc1, 0xfc, 0x1c, 0x3c, 0x3f, 0xff, 0xff, 
	0xc7, 0xe3, 0x80, 0x38, 0x7f, 0x0f, 0x1c, 0x7e, 0x3f, 0x87, 0xf8, 0x3c, 0x7e, 0x3f, 0xff, 0xff, 
	0xc7, 0xe3, 0x80, 0x38, 0x7f, 0x00, 0x1c, 0x7e, 0x3e, 0x0f, 0xf0, 0xfc, 0x7e, 0x3f, 0xff, 0xff, 
	0xc7, 0xe3, 0x8f, 0xf8, 0x7f, 0x00, 0x1c, 0x7e, 0x3c, 0x3f, 0xe1, 0xfc, 0x7e, 0x3f, 0xff, 0xff, 
	0xc7, 0xc3, 0x8f, 0xf8, 0x7f, 0x00, 0x3c, 0x7c, 0x38, 0x3f, 0xc3, 0xfc, 0x3e, 0x3f, 0xff, 0xff, 
	0xc0, 0x03, 0x80, 0x18, 0x01, 0x0f, 0xfc, 0x00, 0x30, 0x01, 0x80, 0x0c, 0x00, 0x3f, 0xff, 0xff, 
	0xc0, 0x07, 0x80, 0x18, 0x01, 0x0f, 0xfe, 0x00, 0x70, 0x01, 0x80, 0x0e, 0x00, 0x7f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};


//LOGO TEMPORALE
const uint8_t Temporale[] PROGMEM= {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
0x80, 0x00, 0x00, 0x00, 0x07, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x60, 0x00, 0x00, 0x00,
0x0C, 0x00, 0x60, 0x00, 0x00, 0x00, 0x18, 0x00, 0x30, 0x00, 0x00, 0x00, 0x18, 0x00, 0x18, 0x00,
0x00, 0x00, 0x10, 0x00, 0x18, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x1E, 0x00, 0x00, 0x07, 0xE0, 0x00,
0x0F, 0x00, 0x00, 0x0C, 0x00, 0x04, 0x01, 0x80, 0x00, 0x18, 0x00, 0x0C, 0x00, 0xC0, 0x00, 0x18,
0x00, 0x1C, 0x00, 0x40, 0x00, 0x10, 0x00, 0x1C, 0x00, 0x60, 0x00, 0x30, 0x00, 0x3C, 0x00, 0x60,
0x00, 0x30, 0x00, 0x6C, 0x00, 0x60, 0x00, 0x30, 0x00, 0xCC, 0x00, 0x60, 0x00, 0x10, 0x00, 0xCC,
0x00, 0x60, 0x00, 0x10, 0x01, 0x88, 0x00, 0x40, 0x00, 0x18, 0x03, 0x08, 0x00, 0xC0, 0x00, 0x0C,
0x06, 0x08, 0x01, 0x80, 0x00, 0x07, 0x06, 0x1F, 0xC3, 0x80, 0x00, 0x03, 0xFC, 0x0F, 0xFE, 0x00,
0x00, 0x00, 0x18, 0x01, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x83, 0x00, 0x00, 0x00, 0x00, 0x01, 0x86,
0x00, 0x00, 0x00, 0x00, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0xC1, 0x8C, 0x30, 0x00, 0x00, 0x03,
0xC1, 0x18, 0x78, 0x00, 0x00, 0x07, 0xC1, 0x30, 0xF8, 0x00, 0x00, 0x0C, 0xC3, 0x31, 0x98, 0x00,
0x00, 0x08, 0x83, 0x63, 0x18, 0x00, 0x00, 0x18, 0x83, 0xC3, 0x10, 0x00, 0x00, 0x19, 0x83, 0x83,
0x30, 0x00, 0x00, 0x0F, 0x83, 0x01, 0xF0, 0x00, 0x00, 0x07, 0x07, 0x00, 0xE0, 0x00, 0x00, 0x00,
0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

//LOGO PIOGGIA
const uint8_t Pioggia[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x18, 0x00, 0x00,
0x00, 0x00, 0x30, 0x04, 0x00, 0x00, 0x00, 0x00, 0x60, 0x02, 0x00, 0x00, 0x00, 0x00, 0x40, 0x03,
0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x07, 0x80, 0x01, 0x80, 0x00, 0x00, 0x1E,
0x00, 0x00, 0xE0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x18, 0x00, 0x00, 0x60, 0x00, 0x00, 0x08, 0x00,
0x00, 0x40, 0x00, 0x00, 0x0C, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x04, 0x00, 0x00, 0xC0, 0x00, 0x00,
0x04, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x04, 0x00, 0x00, 0x40, 0x00, 0x00, 0x04, 0x00, 0x00, 0x40,
0x00, 0x00, 0x0C, 0x00, 0x00, 0x60, 0x00, 0x00, 0x18, 0x00, 0x00, 0x38, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x03, 0x01,
0x80, 0x00, 0x00, 0x0F, 0x07, 0x03, 0xC0, 0x00, 0x00, 0x1B, 0x09, 0x04, 0xC0, 0x00, 0x00, 0x32,
0x19, 0x0C, 0x80, 0x00, 0x00, 0x32, 0x19, 0x0C, 0x80, 0x00, 0x00, 0x1E, 0x0F, 0x07, 0x00, 0x00,
0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x70, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xD0,
0x00, 0x00, 0x00, 0x03, 0xA1, 0x10, 0x00, 0x00, 0x00, 0x02, 0x21, 0x30, 0x00, 0x00, 0x00, 0x03,
0x61, 0xB0, 0x00, 0x00, 0x00, 0x01, 0xC0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

//LOGO SOLE
const uint8_t Sole[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0x04, 0x00, 0x00, 0x00, 0x00,
0x83, 0x04, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x40, 0x08, 0x00, 0x00,
0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x10, 0x30, 0x38, 0x20, 0x00, 0x00, 0x18, 0xC0, 0x0C,
0x60, 0x00, 0x00, 0x0C, 0x80, 0x04, 0xC0, 0x00, 0x00, 0x01, 0x80, 0x02, 0x00, 0x00, 0x00, 0x01,
0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00,
0x00, 0x72, 0x00, 0x01, 0x38, 0x00, 0x00, 0x72, 0x00, 0x01, 0x38, 0x00, 0x00, 0x02, 0x00, 0x01,
0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01,
0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x80, 0x06, 0x80, 0x00, 0x00, 0x1C, 0xC0, 0x0C, 0xE0, 0x00,
0x00, 0x10, 0x70, 0x38, 0x20, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x08,
0x00, 0x00, 0x00, 0x00, 0x43, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x83, 0x04, 0x00, 0x00, 0x00, 0x00,
0x83, 0x04, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

//LOGO NUVOLOSO
const uint8_t Nuvoloso[] PROGMEM= {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x40, 0x00,
0x00, 0x00, 0x03, 0x08, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3C,
0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x31, 0x81, 0x8C, 0x00, 0x00, 0x00,
0x1B, 0x00, 0xD8, 0x00, 0x00, 0x00, 0x02, 0x00, 0x60, 0x00, 0x00, 0x00, 0x06, 0x00, 0x20, 0x00,
0x00, 0x00, 0x3F, 0x80, 0x20, 0x00, 0x00, 0x00, 0xE0, 0xC0, 0x10, 0x00, 0x00, 0x00, 0x80, 0x60,
0x17, 0x00, 0x00, 0x01, 0x80, 0x30, 0x10, 0x00, 0x00, 0x03, 0x00, 0x10, 0x10, 0x00, 0x00, 0x02,
0x00, 0x10, 0x20, 0x00, 0x00, 0x1E, 0x00, 0x1C, 0x20, 0x00, 0x00, 0x7C, 0x00, 0x0E, 0x48, 0x00,
0x00, 0xC0, 0x00, 0x01, 0xCC, 0x00, 0x00, 0x80, 0x00, 0x01, 0x84, 0x00, 0x01, 0x80, 0x00, 0x00,
0x80, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x01, 0x00,
0x00, 0x00, 0xC0, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0x00, 0x01, 0x80, 0x00, 0x00, 0x80, 0x00,
0x00, 0xC0, 0x00, 0x01, 0x80, 0x00, 0x00, 0x60, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFE,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

//------------------------------------------------------------------------------------------------

void draw_1(void){
  Display.drawBitmapP( 0, 0, 16, 64,LG_Intro);
 }

void draw_2(void){
  Sensore_1.getTemperature(Temperatura);
  Display.setFont(u8g_font_8x13);
  Display.setPrintPos(0,10);
  Display.print(" Temperatura");
  Display.setPrintPos(55,40);
  Display.print(Temperatura);
  Display.setPrintPos(97,40);
  Display.print("C");
  Display.drawBitmapP( 0, 17, 6, 48, LG_Tmp);
 }
 
//------------------------------------------------------------------------------------------------
float draw_3(void){
  Sensore_1.getPressure(Pressione);
  Pressione = Pressione/100;
  Serial.print("pressione:");
  Serial.println(Pressione);
  delay(1);
  Display.setPrintPos(32,10);
  Display.print("Pressione");
  Display.setPrintPos(65,45);
  Display.print(Pressione);
  Display.setPrintPos(70,60);
  Display.print("hPa");
  Display.drawBitmapP( 0, 15, 6, 48, LG_Prs);
  return Pressione;
 }
 
//------------------------------------------------------------------------------------------------
 void draw_4(float Pressione){
  Display.setPrintPos(3,10);
  Display.print("Dati Meteo");
  Serial.println(Pressione);
  if((Pressione<=1000.59)&&(Pressione>998.5)){
    Display.drawBitmapP( 10, 15, 6, 48, Nuvoloso);
    Display.setPrintPos(60,45);
    Display.print("Nuvoloso");
   }
  else if((Pressione<998.5)&&(Pressione>996.5)){
    Display.drawBitmapP( 10, 15, 6, 48,Pioggia);
    Display.setPrintPos(66,38);
    Display.print("Pioggia");
   }
  else if((Pressione>1000.6)&&(Pressione<1050)){
    Display.drawBitmapP( 5, 15, 6, 48, Sole);
    Display.setPrintPos(50,45);
    Display.print("Sereno");
   }
  else if((Pressione>940)&&(Pressione<=996.4)){
    Display.drawBitmapP( 5, 15, 6, 48, Temporale);
    Display.setPrintPos(60,45);
    Display.print("Temporale");
   }
  else{
    Display.setPrintPos(40,40);
    Display.print("Errore!");
   }
 }
