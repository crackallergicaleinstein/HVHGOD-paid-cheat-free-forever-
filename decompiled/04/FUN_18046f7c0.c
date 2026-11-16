// FUN_18046f7c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046f7c0 */

longlong FUN_18046f7c0(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4,
                      uint param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  
  iVar4 = (int)param_2;
  if (iVar4 == 4) {
    return param_1;
  }
  if ((-1 < (int)param_4) &&
     ((param_4 == 0 ||
      ((param_2 = 0x7fffffff % (ulonglong)param_4, 3 < (uint)(0x7fffffff / (ulonglong)param_4) &&
       (-1 < (int)(param_4 * 4))))))) {
    if ((-1 < (int)param_5) &&
       (((param_5 == 0 ||
         (param_2 = 0x7fffffff % (ulonglong)param_5,
         (int)(param_4 * 4) <= (int)(0x7fffffff / (ulonglong)param_5))) &&
        (lVar2 = _malloc_base((longlong)(int)(param_4 * 4 * param_5),param_2), lVar2 != 0)))) {
      iVar6 = 0;
      if (0 < (int)param_5) {
        iVar8 = param_4 - 1;
        do {
          puVar3 = (undefined1 *)((ulonglong)(iVar6 * param_4 * 4) + lVar2);
          puVar7 = (undefined1 *)((ulonglong)(iVar6 * iVar4 * param_4) + param_1);
          switch(iVar4 * 8) {
          case 8:
            for (iVar5 = iVar8; -1 < iVar5; iVar5 = iVar5 + -1) {
              uVar1 = *puVar7;
              puVar3[2] = uVar1;
              puVar7 = puVar7 + 1;
              puVar3[1] = uVar1;
              *puVar3 = uVar1;
              puVar3[3] = 0xff;
              puVar3 = puVar3 + 4;
            }
            break;
          case 0x10:
            for (iVar5 = iVar8; -1 < iVar5; iVar5 = iVar5 + -1) {
              uVar1 = *puVar7;
              puVar3[2] = uVar1;
              puVar3[1] = uVar1;
              *puVar3 = uVar1;
              puVar3[3] = puVar7[1];
              puVar3 = puVar3 + 4;
              puVar7 = puVar7 + 2;
            }
            break;
          case 0x18:
            for (iVar5 = iVar8; -1 < iVar5; iVar5 = iVar5 + -1) {
              *puVar3 = *puVar7;
              puVar3[1] = puVar7[1];
              puVar3[2] = puVar7[2];
              puVar3[3] = 0xff;
              puVar3 = puVar3 + 4;
              puVar7 = puVar7 + 3;
            }
            break;
          default:
            thunk_FUN_180621380(param_1);
            thunk_FUN_180621380(lVar2);
            return 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_5);
      }
      thunk_FUN_180621380(param_1);
      return lVar2;
    }
  }
  thunk_FUN_180621380(param_1);
  return 0;
}



