// FUN_1803c61a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c61a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803c61a0(longlong *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  char cVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  undefined1 local_res20 [8];
  undefined1 auStack_d8 [32];
  ushort local_b8;
  uint *local_b0;
  undefined8 local_a8;
  ushort *puStack_a0;
  undefined4 local_98;
  undefined4 local_88;
  undefined8 *local_78;
  char *local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  char local_48 [8];
  undefined1 local_40 [8];
  ushort local_38 [4];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_b0 = (uint *)((longlong)param_2 + 4);
  local_68 = param_1[1];
  local_res20[0] = param_4;
  local_40[0] = param_3;
  if (*(char *)(*param_1 + 0xdc1) == '\0') {
    local_38[0] = local_38[0] & 0xff;
    local_b8 = local_38[0];
    FUN_1803c5bb0(local_68);
  }
  else {
    local_88 = *local_b0;
    uVar3 = (ulonglong)local_88;
    local_70 = local_48;
    local_60 = local_40;
    bVar4 = *(byte *)((longlong)param_2 + 1);
    local_58 = local_res20;
    iVar5 = *(int *)(param_2 + 2);
    local_48[0] = '\0';
    local_78 = param_2;
    uVar1 = FUN_18028c7b0(bVar4);
    local_a8 = &local_78;
    puStack_a0 = local_38;
    local_38[0] = CONCAT11(local_38[0]._1_1_,uVar1);
    FUN_1803c9b30(uVar1,uVar3 & 0xffffffff,*(undefined4 *)((longlong)param_2 + 0xc),&local_a8);
    if (iVar5 - 1U < 3) {
LAB_1803c62b3:
      if ((iVar5 != 0) && (local_88._3_1_ != '\0')) {
        puStack_a0 = (ushort *)local_78[1];
        local_98 = *(undefined4 *)(local_78 + 2);
        local_a8._2_6_ = (undefined6)((ulonglong)*local_78 >> 0x10);
        local_a8._0_2_ =
             CONCAT11(*(undefined1 *)
                       ((longlong)std::_Ref_count_obj2<int>::vftable + (longlong)iVar5 + 0x1f),
                      (char)*local_78);
        local_b0 = &local_88;
        local_b8 = 0x100;
        cVar2 = FUN_1803c5bb0(local_68,&local_a8,*local_60,1);
        if ((cVar2 != '\0') || (cVar2 = '\0', *local_70 != '\0')) {
          cVar2 = '\x01';
        }
        *local_70 = cVar2;
      }
    }
    else {
      local_a8 = (undefined8 **)0x908060504030200;
      if (10 < bVar4) {
        if (bVar4 < 0x13) {
          bVar4 = local_48[(ulonglong)(bVar4 - 0xb) - 0x60];
        }
        else {
          bVar4 = 2;
        }
      }
      uVar3 = 0;
      do {
        if ((&DAT_1807d1130)[uVar3] == bVar4) {
          iVar5 = (int)uVar3 + 1;
          goto LAB_1803c62b3;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 3);
    }
  }
}



