// FUN_180577090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577090 */

ulonglong FUN_180577090(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_48 [8];
  undefined8 local_40;
  
  lVar8 = *(longlong *)(param_2 + 8);
  if ((*(uint *)(*(longlong *)(param_2 + 0xf0) + 0x30) & 0x100000) != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    local_40 = 0;
    if ((((lVar8 != 0) && (uVar1 < *(uint *)(lVar8 + 0x10))) && ((*(byte *)(lVar8 + 8) & 8) != 0))
       && ((pcVar2 = *(code **)(*(longlong *)(lVar8 + 0x2d0) + 0x118), pcVar2 != (code *)0x0 &&
           (cVar3 = (*pcVar2)(lVar8,uVar1,local_res20,local_res10,local_48), cVar3 != '\0')))) {
      iVar4 = FUN_180575510(lVar8,0);
      if (iVar4 == 0) {
        lVar7 = *(longlong *)(lVar8 + 0x2d0);
        while (iVar4 = FUN_180574690(lVar8,local_res20[0],
                                     *(uint *)(*(longlong *)(param_2 + 0xf0) + 0x30) & 0xffefffff |
                                     4), iVar4 == 0) {
          iVar4 = (**(code **)(lVar7 + 0x148))
                            (lVar8,local_res10[0],param_2,*(undefined8 *)(lVar8 + 0x78));
          if (iVar4 != 0) break;
          if (((*(uint *)(lVar8 + 0x10) <= uVar1) || ((*(byte *)(lVar8 + 8) & 8) == 0)) ||
             ((pcVar2 = *(code **)(*(longlong *)(lVar8 + 0x2d0) + 0x118), pcVar2 == (code *)0x0 ||
              (cVar3 = (*pcVar2)(lVar8,uVar1,local_res20,local_res10,local_48), cVar3 == '\0')))) {
            *(undefined4 *)(param_2 + 0x60) = 0x62697473;
            FUN_180573460(*(undefined8 *)(lVar8 + 0x78));
            return 0;
          }
        }
        FUN_180573460(*(undefined8 *)(lVar8 + 0x78));
      }
      *(undefined4 *)(param_2 + 0x60) = 0x6f75746c;
    }
  }
  if (*(int *)(param_2 + 0x60) == 0x6f75746c) {
    lVar7 = *(longlong *)(param_1 + 0x118);
    lVar8 = *(longlong *)(param_1 + 0x128);
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    if (param_1 != 0) {
      for (lVar6 = *(longlong *)(param_1 + 0x118); lVar8 = 0, lVar6 != 0;
          lVar6 = *(longlong *)(lVar6 + 8)) {
        lVar8 = *(longlong *)(lVar6 + 0x10);
        if (*(int *)(lVar8 + 0x20) == *(int *)(param_2 + 0x60)) {
          lVar7 = lVar6;
          break;
        }
      }
    }
  }
  uVar5 = 0x13;
  if (lVar8 != 0) {
    do {
      uVar5 = (**(code **)(lVar8 + 0x70))(lVar8,param_2,param_3,0);
      if ((int)uVar5 == 0) break;
      if ((char)uVar5 != '\x13') {
        return uVar5;
      }
      lVar8 = 0;
      if (param_1 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x118);
        if (lVar7 != 0) {
          lVar6 = *(longlong *)(lVar7 + 8);
        }
        lVar7 = 0;
        if (lVar6 != 0) {
          while (lVar8 = *(longlong *)(lVar6 + 0x10),
                *(int *)(lVar8 + 0x20) != *(int *)(param_2 + 0x60)) {
            lVar6 = *(longlong *)(lVar6 + 8);
            if (lVar6 == 0) goto LAB_1805772c1;
          }
          lVar7 = lVar6;
        }
      }
    } while (lVar8 != 0);
    if ((char)uVar5 != '\x13') {
      return uVar5;
    }
  }
LAB_1805772c1:
  uVar5 = uVar5 & 0xffffffff;
  if (*(int *)(param_2 + 0x60) == 0x62697473) {
    uVar5 = 0;
  }
  return uVar5;
}



