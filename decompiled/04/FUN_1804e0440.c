// FUN_1804e0440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e0440 */

void FUN_1804e0440(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,float param_8)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar9;
  longlong local_28;
  longlong lStack_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if ((param_7 & 0xff000000) != 0) {
    if (param_8 < 0.5) {
      local_28 = *param_2;
      lStack_20 = param_2[1];
      FUN_1804e0320(local_28,&local_28,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      if ((param_2[1] == *(longlong *)(param_1 + 0x78)) &&
         (*param_2 == *(longlong *)(param_1 + 0x70))) {
        bVar6 = false;
      }
      else {
        piVar1 = (int *)(param_1 + 0xb0);
        bVar6 = true;
        iVar7 = *(int *)(param_1 + 0xb4);
        if (*piVar1 == iVar7) {
          iVar8 = *piVar1 + 1;
          if (iVar7 == 0) {
            iVar7 = 8;
          }
          else {
            iVar7 = iVar7 / 2 + iVar7;
          }
          if (iVar8 < iVar7) {
            iVar8 = iVar7;
          }
          FUN_1804aec70(piVar1,iVar8);
        }
        lVar4 = *param_2;
        lVar5 = param_2[1];
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)*piVar1 * 0x10);
        *plVar2 = lVar4;
        plVar2[1] = lVar5;
        *piVar1 = *piVar1 + 1;
        *(longlong *)(param_1 + 0x70) = lVar4;
        *(longlong *)(param_1 + 0x78) = lVar5;
        FUN_1804d92c0(param_1);
      }
      uVar3 = *(undefined4 *)(param_1 + 0x20);
      FUN_1804dc420(param_1,param_3,param_4,param_8,CONCAT44(uVar9,0xf0));
      FUN_1804dafe0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_7,
                    0x400);
      *(undefined4 *)(param_1 + 0x50) = 0;
      FUN_1804e2330(param_1,uVar3,*(undefined4 *)(param_1 + 0x20),param_3,param_4,param_5,param_6);
      if (bVar6) {
        FUN_1804d9530(param_1);
      }
    }
  }
  return;
}



