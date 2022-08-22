#pragma once
#include <serialize/detail/type.h>

namespace detail {

static inline type size_to_type(std::size_t size) {
  switch (size) {
  case 0:
    return type::size0;
  case 1:
    return type::size1;
  case 2:
    return type::size2;
  case 3:
    return type::size3;
  case 4:
    return type::size4;
  case 5:
    return type::size5;
  case 6:
    return type::size6;
  case 7:
    return type::size7;
  case 8:
    return type::size8;
  case 9:
    return type::size9;
  case 10:
    return type::size10;
  case 11:
    return type::size11;
  case 12:
    return type::size12;
  case 13:
    return type::size13;
  case 14:
    return type::size14;
  case 15:
    return type::size15;
  case 16:
    return type::size16;
  case 17:
    return type::size17;
  case 18:
    return type::size18;
  case 19:
    return type::size19;
  case 20:
    return type::size20;
  case 21:
    return type::size21;
  case 22:
    return type::size22;
  case 23:
    return type::size23;
  case 24:
    return type::size24;
  case 25:
    return type::size25;
  case 26:
    return type::size26;
  case 27:
    return type::size27;
  case 28:
    return type::size28;
  case 29:
    return type::size29;
  case 30:
    return type::size30;
  case 31:
    return type::size31;
  case 32:
    return type::size32;
  case 33:
    return type::size33;
  case 34:
    return type::size34;
  case 35:
    return type::size35;
  case 36:
    return type::size36;
  case 37:
    return type::size37;
  case 38:
    return type::size38;
  case 39:
    return type::size39;
  case 40:
    return type::size40;
  case 41:
    return type::size41;
  case 42:
    return type::size42;
  case 43:
    return type::size43;
  case 44:
    return type::size44;
  case 45:
    return type::size45;
  case 46:
    return type::size46;
  case 47:
    return type::size47;
  case 48:
    return type::size48;
  case 49:
    return type::size49;
  case 50:
    return type::size50;
  case 51:
    return type::size51;
  case 52:
    return type::size52;
  case 53:
    return type::size53;
  case 54:
    return type::size54;
  case 55:
    return type::size55;
  case 56:
    return type::size56;
  case 57:
    return type::size57;
  case 58:
    return type::size58;
  case 59:
    return type::size59;
  case 60:
    return type::size60;
  case 61:
    return type::size61;
  case 62:
    return type::size62;
  case 63:
    return type::size63;
  case 64:
    return type::size64;
  case 65:
    return type::size65;
  case 66:
    return type::size66;
  case 67:
    return type::size67;
  case 68:
    return type::size68;
  case 69:
    return type::size69;
  case 70:
    return type::size70;
  case 71:
    return type::size71;
  case 72:
    return type::size72;
  case 73:
    return type::size73;
  case 74:
    return type::size74;
  case 75:
    return type::size75;
  case 76:
    return type::size76;
  case 77:
    return type::size77;
  case 78:
    return type::size78;
  case 79:
    return type::size79;
  case 80:
    return type::size80;
  case 81:
    return type::size81;
  case 82:
    return type::size82;
  case 83:
    return type::size83;
  case 84:
    return type::size84;
  case 85:
    return type::size85;
  case 86:
    return type::size86;
  case 87:
    return type::size87;
  case 88:
    return type::size88;
  case 89:
    return type::size89;
  case 90:
    return type::size90;
  case 91:
    return type::size91;
  case 92:
    return type::size92;
  case 93:
    return type::size93;
  case 94:
    return type::size94;
  case 95:
    return type::size95;
  case 96:
    return type::size96;
  case 97:
    return type::size97;
  case 98:
    return type::size98;
  case 99:
    return type::size99;
  default:
    throw std::invalid_argument("size must be between 0 and 99");
  }
}

static inline std::size_t type_to_size(type size) {
  switch (size) {
  case type::size0:
    return 0;
  case type::size1:
    return 1;
  case type::size2:
    return 2;
  case type::size3:
    return 3;
  case type::size4:
    return 4;
  case type::size5:
    return 5;
  case type::size6:
    return 6;
  case type::size7:
    return 7;
  case type::size8:
    return 8;
  case type::size9:
    return 9;
  case type::size10:
    return 10;
  case type::size11:
    return 11;
  case type::size12:
    return 12;
  case type::size13:
    return 13;
  case type::size14:
    return 14;
  case type::size15:
    return 15;
  case type::size16:
    return 16;
  case type::size17:
    return 17;
  case type::size18:
    return 18;
  case type::size19:
    return 19;
  case type::size20:
    return 20;
  case type::size21:
    return 21;
  case type::size22:
    return 22;
  case type::size23:
    return 23;
  case type::size24:
    return 24;
  case type::size25:
    return 25;
  case type::size26:
    return 26;
  case type::size27:
    return 27;
  case type::size28:
    return 28;
  case type::size29:
    return 29;
  case type::size30:
    return 30;
  case type::size31:
    return 31;
  case type::size32:
    return 32;
  case type::size33:
    return 33;
  case type::size34:
    return 34;
  case type::size35:
    return 35;
  case type::size36:
    return 36;
  case type::size37:
    return 37;
  case type::size38:
    return 38;
  case type::size39:
    return 39;
  case type::size40:
    return 40;
  case type::size41:
    return 41;
  case type::size42:
    return 42;
  case type::size43:
    return 43;
  case type::size44:
    return 44;
  case type::size45:
    return 45;
  case type::size46:
    return 46;
  case type::size47:
    return 47;
  case type::size48:
    return 48;
  case type::size49:
    return 49;
  case type::size50:
    return 50;
  case type::size51:
    return 51;
  case type::size52:
    return 52;
  case type::size53:
    return 53;
  case type::size54:
    return 54;
  case type::size55:
    return 55;
  case type::size56:
    return 56;
  case type::size57:
    return 57;
  case type::size58:
    return 58;
  case type::size59:
    return 59;
  case type::size60:
    return 60;
  case type::size61:
    return 61;
  case type::size62:
    return 62;
  case type::size63:
    return 63;
  case type::size64:
    return 64;
  case type::size65:
    return 65;
  case type::size66:
    return 66;
  case type::size67:
    return 67;
  case type::size68:
    return 68;
  case type::size69:
    return 69;
  case type::size70:
    return 70;
  case type::size71:
    return 71;
  case type::size72:
    return 72;
  case type::size73:
    return 73;
  case type::size74:
    return 74;
  case type::size75:
    return 75;
  case type::size76:
    return 76;
  case type::size77:
    return 77;
  case type::size78:
    return 78;
  case type::size79:
    return 79;
  case type::size80:
    return 80;
  case type::size81:
    return 81;
  case type::size82:
    return 82;
  case type::size83:
    return 83;
  case type::size84:
    return 84;
  case type::size85:
    return 85;
  case type::size86:
    return 86;
  case type::size87:
    return 87;
  case type::size88:
    return 88;
  case type::size89:
    return 89;
  case type::size90:
    return 90;
  case type::size91:
    return 91;
  case type::size92:
    return 92;
  case type::size93:
    return 93;
  case type::size94:
    return 94;
  case type::size95:
    return 95;
  case type::size96:
    return 96;
  case type::size97:
    return 97;
  case type::size98:
    return 98;
  case type::size99:
    return 99;
  default:
    throw std::invalid_argument("size must be between 0 and 99");
  }
}

} // namespace detail