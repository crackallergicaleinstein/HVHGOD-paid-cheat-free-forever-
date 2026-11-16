// FUN_180206db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180206db0 */

bool FUN_180206db0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  size_t _Size;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar1 = param_2[1];
  if ((uVar1 != 0) && (4 < uVar1)) {
    lVar2 = *param_2;
    iVar5 = *(int *)(lVar2 + -5 + uVar1) + -0x646d762e;
    if (iVar5 == 0) {
      iVar5 = *(byte *)(lVar2 + -1 + uVar1) - 0x6c;
    }
    if (iVar5 == 0) {
      uVar3 = param_1[1];
      if (0xc < uVar3) {
        plVar4 = (longlong *)*param_1;
        lVar6 = *plVar4 + -0x6c706d6f74737563;
        if ((lVar6 == 0) && (lVar6 = (ulonglong)*(uint *)(plVar4 + 1) - 0x72657961, lVar6 == 0)) {
          lVar6 = (ulonglong)*(byte *)((longlong)plVar4 + 0xc) - 0x5f;
        }
        if (lVar6 == 0) {
          lVar6 = (longlong)plVar4 + 0xd;
          *param_1 = lVar6;
          param_1[1] = uVar3 - 0xd;
          if (9 < uVar3 - 0xd) {
            lVar7 = *(longlong *)((uVar3 - 0x17) + lVar6) + -0x7361625f70616d5f;
            if (lVar7 == 0) {
              lVar7 = (ulonglong)*(ushort *)((uVar3 - 0xf) + lVar6) - 0x6465;
            }
            if (lVar7 == 0) {
              return true;
            }
          }
          lVar6 = -1;
          if (uVar1 - 1 != -1) {
            lVar6 = uVar1 - 1;
          }
          lVar8 = lVar6 + 1 + lVar2;
          lVar7 = thunk_FUN_1805f7d20(lVar2,lVar8,CONCAT71((int7)(uVar3 >> 8),0x2f));
          _Size = param_1[1];
          lVar6 = -1;
          if (lVar7 != lVar8) {
            lVar6 = lVar7 - lVar2;
          }
          if (_Size != (uVar1 - (lVar6 + 1)) - 5) {
            return false;
          }
          if (_Size != 0) {
            iVar5 = memcmp((void *)*param_1,(void *)(lVar6 + 1 + lVar2),_Size);
            return iVar5 == 0;
          }
        }
      }
      return true;
    }
  }
  return false;
}



