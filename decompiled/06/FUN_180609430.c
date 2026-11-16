// FUN_180609430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180609430 */

longlong FUN_180609430(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong local_58 [2];
  undefined1 local_48 [16];
  
  lVar8 = FUN_180606ee8();
  uVar2 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = FUN_180606ee8();
  uVar3 = *(undefined8 *)(lVar8 + 0x20);
  piVar4 = *(int **)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  local_58[0] = *(longlong *)(param_1 + 0x48);
  local_58[1] = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  __except_validate_context_record(uVar9);
  lVar8 = FUN_180606ee8();
  *(int **)(lVar8 + 0x20) = piVar4;
  lVar8 = FUN_180606ee8();
  *(undefined8 *)(lVar8 + 0x28) = uVar9;
  lVar8 = FUN_180606ee8();
  uVar9 = _CreateFrameInfo(local_48,*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0x28));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_180606ee8();
  }
  lVar8 = FUN_18060a640(uVar5,uVar6,0x100);
  if ((lVar8 < 2) && (lVar8 = local_58[lVar8], lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_18060a670(lVar8,uVar6);
  FUN_1806062bc(uVar9);
  if ((((*piVar4 == -0x1f928c9d) && (piVar4[6] == 4)) &&
      ((piVar4[8] == 0x19930520 || (piVar4[8] + 0xe66cfadfU < 2)))) &&
     (iVar7 = _IsExceptionObjectToBeDestroyed(*(undefined8 *)(piVar4 + 10)), iVar7 != 0)) {
    FUN_1806064c0(piVar4,1);
  }
  lVar10 = FUN_180606ee8();
  *(undefined8 *)(lVar10 + 0x20) = uVar3;
  lVar10 = FUN_180606ee8();
  *(undefined8 *)(lVar10 + 0x28) = uVar2;
  lVar10 = FUN_180606ee8();
  *(undefined4 *)(lVar10 + 0x78) = uVar1;
  lVar10 = FUN_180606ee8();
  *(undefined4 *)(lVar10 + 0x78) = 0xfffffffe;
  return lVar8;
}



