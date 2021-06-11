// Names from https://en.wikipedia.org/wiki/X11_color_names

// So this in a way that does not require memory allocation
// the old way leaked memory
// this is not used as often as for more performance to make sense

struct NamedColor {
	const char *name;
	Color color;
};

// NOTE: This data is duplicated in the file:
// modules/mono/glue/GodotSharp/GodotSharp/Core/Colors.cs

static NamedColor named_colors[] = {
	{ "ALICE_BLUE", Color(0.94, 0.97, 1.00) },
	{ "ANTIQUE_WHITE", Color(0.98, 0.92, 0.84) },
	{ "AQUA", Color(0.00, 1.00, 1.00) },
	{ "AQUAMARINE", Color(0.50, 1.00, 0.83) },
	{ "AZURE", Color(0.94, 1.00, 1.00) },
	{ "BEIGE", Color(0.96, 0.96, 0.86) },
	{ "BISQUE", Color(1.00, 0.89, 0.77) },
	{ "BLACK", Color(0.00, 0.00, 0.00) },
	{ "BLANCHED_ALMOND", Color(1.00, 0.92, 0.80) },
	{ "BLUE", Color(0.00, 0.00, 1.00) },
	{ "BLUE_VIOLET", Color(0.54, 0.17, 0.89) },
	{ "BROWN", Color(0.65, 0.16, 0.16) },
	{ "BURLYWOOD", Color(0.87, 0.72, 0.53) },
	{ "CADET_BLUE", Color(0.37, 0.62, 0.63) },
	{ "CHARTREUSE", Color(0.50, 1.00, 0.00) },
	{ "CHOCOLATE", Color(0.82, 0.41, 0.12) },
	{ "CORAL", Color(1.00, 0.50, 0.31) },
	{ "CORNFLOWER_BLUE", Color(0.39, 0.58, 0.93) },
	{ "CORNSILK", Color(1.00, 0.97, 0.86) },
	{ "CRIMSON", Color(0.86, 0.08, 0.24) },
	{ "CYAN", Color(0.00, 1.00, 1.00) },
	{ "DARK_BLUE", Color(0.00, 0.00, 0.55) },
	{ "DARK_CYAN", Color(0.00, 0.55, 0.55) },
	{ "DARK_GOLDENROD", Color(0.72, 0.53, 0.04) },
	{ "DARK_GRAY", Color(0.66, 0.66, 0.66) },
	{ "DARK_GREEN", Color(0.00, 0.39, 0.00) },
	{ "DARK_KHAKI", Color(0.74, 0.72, 0.42) },
	{ "DARK_MAGENTA", Color(0.55, 0.00, 0.55) },
	{ "DARK_OLIVE_GREEN", Color(0.33, 0.42, 0.18) },
	{ "DARK_ORANGE", Color(1.00, 0.55, 0.00) },
	{ "DARK_ORCHID", Color(0.60, 0.20, 0.80) },
	{ "DARK_RED", Color(0.55, 0.00, 0.00) },
	{ "DARK_SALMON", Color(0.91, 0.59, 0.48) },
	{ "DARK_SEA_GREEN", Color(0.56, 0.74, 0.56) },
	{ "DARK_SLATE_BLUE", Color(0.28, 0.24, 0.55) },
	{ "DARK_SLATE_GRAY", Color(0.18, 0.31, 0.31) },
	{ "DARK_TURQUOISE", Color(0.00, 0.81, 0.82) },
	{ "DARK_VIOLET", Color(0.58, 0.00, 0.83) },
	{ "DEEP_PINK", Color(1.00, 0.08, 0.58) },
	{ "DEEP_SKY_BLUE", Color(0.00, 0.75, 1.00) },
	{ "DIM_GRAY", Color(0.41, 0.41, 0.41) },
	{ "DODGER_BLUE", Color(0.12, 0.56, 1.00) },
	{ "FIREBRICK", Color(0.70, 0.13, 0.13) },
	{ "FLORAL_WHITE", Color(1.00, 0.98, 0.94) },
	{ "FOREST_GREEN", Color(0.13, 0.55, 0.13) },
	{ "FUCHSIA", Color(1.00, 0.00, 1.00) },
	{ "GAINSBORO", Color(0.86, 0.86, 0.86) },
	{ "GHOST_WHITE", Color(0.97, 0.97, 1.00) },
	{ "GOLD", Color(1.00, 0.84, 0.00) },
	{ "GOLDENROD", Color(0.85, 0.65, 0.13) },
	{ "GRAY", Color(0.75, 0.75, 0.75) },
	{ "GREEN", Color(0.00, 1.00, 0.00) },
	{ "GREEN_YELLOW", Color(0.68, 1.00, 0.18) },
	{ "HONEYDEW", Color(0.94, 1.00, 0.94) },
	{ "HOT_PINK", Color(1.00, 0.41, 0.71) },
	{ "INDIAN_RED", Color(0.80, 0.36, 0.36) },
	{ "INDIGO", Color(0.29, 0.00, 0.51) },
	{ "IVORY", Color(1.00, 1.00, 0.94) },
	{ "KHAKI", Color(0.94, 0.90, 0.55) },
	{ "LAVENDER", Color(0.90, 0.90, 0.98) },
	{ "LAVENDER_BLUSH", Color(1.00, 0.94, 0.96) },
	{ "LAWN_GREEN", Color(0.49, 0.99, 0.00) },
	{ "LEMON_CHIFFON", Color(1.00, 0.98, 0.80) },
	{ "LIGHT_BLUE", Color(0.68, 0.85, 0.90) },
	{ "LIGHT_CORAL", Color(0.94, 0.50, 0.50) },
	{ "LIGHT_CYAN", Color(0.88, 1.00, 1.00) },
	{ "LIGHT_GOLDENROD", Color(0.98, 0.98, 0.82) },
	{ "LIGHT_GRAY", Color(0.83, 0.83, 0.83) },
	{ "LIGHT_GREEN", Color(0.56, 0.93, 0.56) },
	{ "LIGHT_PINK", Color(1.00, 0.71, 0.76) },
	{ "LIGHT_SALMON", Color(1.00, 0.63, 0.48) },
	{ "LIGHT_SEA_GREEN", Color(0.13, 0.70, 0.67) },
	{ "LIGHT_SKY_BLUE", Color(0.53, 0.81, 0.98) },
	{ "LIGHT_SLATE_GRAY", Color(0.47, 0.53, 0.60) },
	{ "LIGHT_STEEL_BLUE", Color(0.69, 0.77, 0.87) },
	{ "LIGHT_YELLOW", Color(1.00, 1.00, 0.88) },
	{ "LIME", Color(0.00, 1.00, 0.00) },
	{ "LIME_GREEN", Color(0.20, 0.80, 0.20) },
	{ "LINEN", Color(0.98, 0.94, 0.90) },
	{ "MAGENTA", Color(1.00, 0.00, 1.00) },
	{ "MAROON", Color(0.69, 0.19, 0.38) },
	{ "MEDIUM_AQUAMARINE", Color(0.40, 0.80, 0.67) },
	{ "MEDIUM_BLUE", Color(0.00, 0.00, 0.80) },
	{ "MEDIUM_ORCHID", Color(0.73, 0.33, 0.83) },
	{ "MEDIUM_PURPLE", Color(0.58, 0.44, 0.86) },
	{ "MEDIUM_SEA_GREEN", Color(0.24, 0.70, 0.44) },
	{ "MEDIUM_SLATE_BLUE", Color(0.48, 0.41, 0.93) },
	{ "MEDIUM_SPRING_GREEN", Color(0.00, 0.98, 0.60) },
	{ "MEDIUM_TURQUOISE", Color(0.28, 0.82, 0.80) },
	{ "MEDIUM_VIOLET_RED", Color(0.78, 0.08, 0.52) },
	{ "MIDNIGHT_BLUE", Color(0.10, 0.10, 0.44) },
	{ "MINT_CREAM", Color(0.96, 1.00, 0.98) },
	{ "MISTY_ROSE", Color(1.00, 0.89, 0.88) },
	{ "MOCCASIN", Color(1.00, 0.89, 0.71) },
	{ "NAVAJO_WHITE", Color(1.00, 0.87, 0.68) },
	{ "NAVY_BLUE", Color(0.00, 0.00, 0.50) },
	{ "OLD_LACE", Color(0.99, 0.96, 0.90) },
	{ "OLIVE", Color(0.50, 0.50, 0.00) },
	{ "OLIVE_DRAB", Color(0.42, 0.56, 0.14) },
	{ "ORANGE", Color(1.00, 0.65, 0.00) },
	{ "ORANGE_RED", Color(1.00, 0.27, 0.00) },
	{ "ORCHID", Color(0.85, 0.44, 0.84) },
	{ "PALE_GOLDENROD", Color(0.93, 0.91, 0.67) },
	{ "PALE_GREEN", Color(0.60, 0.98, 0.60) },
	{ "PALE_TURQUOISE", Color(0.69, 0.93, 0.93) },
	{ "PALE_VIOLET_RED", Color(0.86, 0.44, 0.58) },
	{ "PAPAYA_WHIP", Color(1.00, 0.94, 0.84) },
	{ "PEACH_PUFF", Color(1.00, 0.85, 0.73) },
	{ "PERU", Color(0.80, 0.52, 0.25) },
	{ "PINK", Color(1.00, 0.75, 0.80) },
	{ "PLUM", Color(0.87, 0.63, 0.87) },
	{ "POWDER_BLUE", Color(0.69, 0.88, 0.90) },
	{ "PURPLE", Color(0.63, 0.13, 0.94) },
	{ "REBECCA_PURPLE", Color(0.40, 0.20, 0.60) },
	{ "RED", Color(1.00, 0.00, 0.00) },
	{ "ROSY_BROWN", Color(0.74, 0.56, 0.56) },
	{ "ROYAL_BLUE", Color(0.25, 0.41, 0.88) },
	{ "SADDLE_BROWN", Color(0.55, 0.27, 0.07) },
	{ "SALMON", Color(0.98, 0.50, 0.45) },
	{ "SANDY_BROWN", Color(0.96, 0.64, 0.38) },
	{ "SEA_GREEN", Color(0.18, 0.55, 0.34) },
	{ "SEASHELL", Color(1.00, 0.96, 0.93) },
	{ "SIENNA", Color(0.63, 0.32, 0.18) },
	{ "SILVER", Color(0.75, 0.75, 0.75) },
	{ "SKY_BLUE", Color(0.53, 0.81, 0.92) },
	{ "SLATE_BLUE", Color(0.42, 0.35, 0.80) },
	{ "SLATE_GRAY", Color(0.44, 0.50, 0.56) },
	{ "SNOW", Color(1.00, 0.98, 0.98) },
	{ "SPRING_GREEN", Color(0.00, 1.00, 0.50) },
	{ "STEEL_BLUE", Color(0.27, 0.51, 0.71) },
	{ "TAN", Color(0.82, 0.71, 0.55) },
	{ "TEAL", Color(0.00, 0.50, 0.50) },
	{ "THISTLE", Color(0.85, 0.75, 0.85) },
	{ "TOMATO", Color(1.00, 0.39, 0.28) },
	{ "TRANSPARENT", Color(1.00, 1.00, 1.00, 0.00) },
	{ "TURQUOISE", Color(0.25, 0.88, 0.82) },
	{ "VIOLET", Color(0.93, 0.51, 0.93) },
	{ "WEB_GRAY", Color(0.50, 0.50, 0.50) },
	{ "WEB_GREEN", Color(0.00, 0.50, 0.00) },
	{ "WEB_MAROON", Color(0.50, 0.00, 0.00) },
	{ "WEB_PURPLE", Color(0.50, 0.00, 0.50) },
	{ "WHEAT", Color(0.96, 0.87, 0.70) },
	{ "WHITE", Color(1.00, 1.00, 1.00) },
	{ "WHITE_SMOKE", Color(0.96, 0.96, 0.96) },
	{ "YELLOW", Color(1.00, 1.00, 0.00) },
	{ "YELLOW_GREEN", Color(0.60, 0.80, 0.20) },
	{ nullptr, Color() },
};