// FUN_1804c1970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c1970 */

bool FUN_1804c1970(uint param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar1 = DAT_180bb8ae8;
  if ((param_1 & 0xffffcf50) != 0) {
    FUN_1804c5a40("Invalid flags for IsWindowHovered()!");
  }
  lVar6 = *(longlong *)(lVar1 + 0x14d8);
  lVar4 = *(longlong *)(lVar1 + 0x14d0);
  if (lVar6 != 0) {
    if ((param_1 & 4) == 0) {
      if (((param_1 & 2) != 0) && (lVar3 = lVar4, lVar4 != 0)) {
        do {
          lVar4 = *(longlong *)(lVar3 + 0x3d8);
          if ((param_1 & 8) == 0) {
            lVar4 = *(longlong *)(lVar4 + 0x3e0);
          }
          bVar7 = lVar3 != lVar4;
          lVar3 = lVar4;
        } while (bVar7);
      }
      if ((param_1 & 1) == 0) {
        bVar7 = lVar6 == lVar4;
      }
      else {
        lVar3 = lVar6;
        do {
          lVar5 = *(longlong *)(lVar3 + 0x3d8);
          if ((param_1 & 8) == 0) {
            lVar5 = *(longlong *)(lVar5 + 0x3e0);
          }
          bVar7 = lVar3 != lVar5;
          lVar3 = lVar5;
        } while (bVar7);
        lVar3 = lVar6;
        if (lVar5 == lVar4) {
LAB_1804c1a20:
          bVar7 = true;
        }
        else {
          do {
            if (lVar3 == lVar4) goto LAB_1804c1a20;
          } while ((lVar3 != lVar5) && (lVar3 = *(longlong *)(lVar3 + 0x3c8), lVar3 != 0));
          bVar7 = false;
        }
      }
      if (!bVar7) {
        return false;
      }
    }
    cVar2 = FUN_1804b7ab0(lVar6,param_1);
    if (cVar2 != '\0') {
      if ((((-1 < (char)param_1) && (*(int *)(lVar1 + 0x1550) != 0)) &&
          (*(char *)(lVar1 + 0x155f) == '\0')) &&
         (*(int *)(lVar1 + 0x1550) != *(int *)(lVar6 + 0x8c))) {
        return false;
      }
      if ((param_1 >> 0xc & 1) != 0) {
        param_1 = param_1 | *(uint *)(lVar1 + 0x11a4);
      }
      if ((param_1 >> 0xd & 1) == 0) {
        return true;
      }
      return *(int *)(lVar1 + 0x24d4) == *(int *)(lVar6 + 0x10);
    }
  }
  return false;
}



