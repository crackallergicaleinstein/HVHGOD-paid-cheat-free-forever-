// FUN_180594950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180594950 */

int FUN_180594950(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = *(undefined8 *)(param_2 + 0x30);
  local_res8[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x68646d78,param_2,local_res10);
  if ((local_res8[0] != 0) || (local_res10[0] < 8)) {
    return 0;
  }
  local_res8[0] = FUN_180577d80(param_2,local_res10[0],param_1 + 0x448);
  if (local_res8[0] == 0) {
    lVar1 = *(longlong *)(param_1 + 0x448);
    uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar1 + 2),*(undefined1 *)(lVar1 + 3));
    uVar8 = (ulonglong)local_res10[0];
    uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 4),*(undefined1 *)(lVar1 + 5)),
                              *(undefined1 *)(lVar1 + 6)),*(undefined1 *)(lVar1 + 7));
    uVar2 = (uint)CONCAT11(*(undefined1 *)(lVar1 + 6),*(undefined1 *)(lVar1 + 7));
    if (uVar4 < 0xffff0000) {
      uVar2 = uVar4;
    }
    uVar4 = 0;
    if ((uVar6 - 1 < 0xff) && (uVar2 == (*(int *)(param_1 + 0x10) + 5U & 0xfffffffc))) {
      uVar3 = FUN_18057ac40(local_res18,8,0,uVar6,0,local_res8);
      *(undefined8 *)(param_1 + 0x460) = uVar3;
      if (local_res8[0] == 0) {
        if (uVar6 != 0) {
          lVar5 = 0;
          uVar7 = lVar1 + 8;
          do {
            if (uVar8 + lVar1 < uVar7 + uVar2) break;
            uVar4 = uVar4 + 1;
            *(ulonglong *)(lVar5 + *(longlong *)(param_1 + 0x460)) = uVar7;
            lVar5 = lVar5 + 8;
            uVar7 = uVar7 + uVar2;
          } while (uVar4 < uVar6);
        }
        FUN_1806192c0(*(undefined8 *)(param_1 + 0x460),uVar4,8,FUN_180591180);
        *(uint *)(param_1 + 0x450) = local_res10[0];
        *(uint *)(param_1 + 0x454) = uVar4;
        *(uint *)(param_1 + 0x458) = uVar2;
        return local_res8[0];
      }
    }
    FUN_180578860(param_2,param_1 + 0x448);
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return local_res8[0];
}



