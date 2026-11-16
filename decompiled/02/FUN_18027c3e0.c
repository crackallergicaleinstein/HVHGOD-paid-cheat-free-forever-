// FUN_18027c3e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027c3e0 */

undefined1 (*) [32] FUN_18027c3e0(undefined1 (*param_1) [32],longlong param_2)

{
  undefined1 auVar1 [32];
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong local_38;
  longlong lStack_30;
  undefined8 uStack_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined1 uStack_10;
  undefined7 uStack_f;
  
  if (param_2 != 0) {
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    local_38 = 0;
    lStack_30 = 0;
    uStack_28 = 0;
    lStack_20 = 0;
    local_18 = 0;
    cVar5 = FUN_1804514f0(&local_38,param_2,0x28);
    lVar4 = lStack_20;
    uVar3 = uStack_28;
    lVar2 = lStack_30;
    lVar6 = local_38;
    uStack_10 = cVar5 != '\0';
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (cVar5 != '\0') {
      auVar1._8_8_ = lVar2;
      auVar1._0_8_ = lVar6;
      auVar1._16_8_ = uVar3;
      auVar1._24_8_ = lVar4;
      iVar8 = (int)((ulonglong)lVar2 >> 0x20);
      if (((((((-1 < lVar2) && (iVar9 = (int)uVar3, -1 < iVar9)) && (-1 < (int)lVar2)) &&
            ((-1 < (int)local_18 && (iVar8 <= (int)lVar2)))) &&
           ((iVar9 <= (int)local_18 && ((iVar8 == 0 || (lVar6 != 0)))))) &&
          ((iVar9 == 0 || (lVar4 != 0)))) && ((iVar8 <= 0x100000 - iVar9 && (-1 < iVar8 + iVar9))))
      {
        *param_1 = auVar1;
        *(undefined8 *)param_1[1] = local_18;
        *(ulonglong *)(param_1[1] + 8) = CONCAT71(uStack_f,uStack_10);
        return param_1;
      }
    }
  }
  param_1[1][8] = 0;
  return param_1;
}



