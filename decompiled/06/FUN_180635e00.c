// FUN_180635e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180635e00 */

uint FUN_180635e00(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_1806281a0();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar3 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar3 = uVar4;
    }
    uVar2 = uVar1 & 0x300;
    if (uVar2 != 0) {
      if (uVar2 == 0x100) {
        uVar3 = uVar3 | 0x2000;
      }
      else if (uVar2 == 0x200) {
        uVar3 = uVar3 | 0x4000;
      }
      else if (uVar2 == 0x300) {
        uVar3 = uVar3 | 0x6000;
      }
    }
    uVar1 = uVar1 & 0x3000000;
    if (uVar1 == 0x1000000) {
      uVar3 = uVar3 | 0x8040;
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = uVar3 | 0x40;
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((DAT_1808d7cd8 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar3 = uVar3 & 0xffffffbf;
      FUN_1806281b0(uVar3);
    }
    else {
      FUN_1806281b0(uVar3);
    }
    uVar1 = uVar3 >> 3 & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar3 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar3 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar3 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar3 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar3 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar3 & 0x6000;
    if (uVar1 != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar3 = uVar3 & 0x8040;
    if (uVar3 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar3 == 0x8000) {
        return uVar2 | 0x3000000;
      }
      if (uVar3 == 0x8040) {
        return uVar2 | 0x1000000;
      }
    }
  }
  return uVar2;
}



