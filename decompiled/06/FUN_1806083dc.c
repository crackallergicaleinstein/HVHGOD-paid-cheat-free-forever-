// FUN_1806083dc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806083dc */

void FUN_1806083dc(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  PVOID pvVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 in_stack_ffffffffffffff30;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar8;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  int local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint local_48;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  if (*param_1 != -0x7ffffffd) {
    lVar2 = FUN_180606ee8();
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      pvVar3 = EncodePointer((PVOID)0x0);
      lVar2 = FUN_180606ee8();
      if (((*(PVOID *)(lVar2 + 0x10) != pvVar3) && (*param_1 != -0x1fbcb0b3)) &&
         (*param_1 != -0x1fbcbcae)) {
        uVar6 = CONCAT44(uVar7,param_7);
        iVar1 = FUN_1806057a8(param_1,param_2,param_3,param_4,param_5,uVar6,param_8,
                              CONCAT44(uVar8,param_6));
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (iVar1 != 0) {
          return;
        }
      }
    }
    local_90 = *(undefined8 *)(param_4 + 8);
    local_98 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_180605bb8(&local_60,&local_98,param_6,param_4,param_5,CONCAT44(uVar7,param_7));
    uVar4 = (uint)uStack_58;
    local_88 = local_60;
    uStack_80 = uStack_58;
    if (uVar4 < local_48) {
      do {
        lVar2 = (longlong)*(int *)(*local_88 + 0x10) + (ulonglong)uVar4 * 0x14;
        local_78 = *(undefined1 (*) [16])(lVar2 + local_60[1]);
        local_68 = *(int *)(lVar2 + 0x10 + local_60[1]);
        if ((local_78._0_4_ <= param_6) && (param_6 <= local_78._4_4_)) {
          pbVar5 = (byte *)(*(longlong *)(param_4 + 8) + -0x14 +
                           (longlong)local_68 + (local_78._8_8_ >> 0x20) * 0x14);
          iVar1 = *(int *)(pbVar5 + 4);
          if ((iVar1 != 0) && (lVar2 = FUN_180606310(), lVar2 + iVar1 != 0)) {
            iVar1 = *(int *)(pbVar5 + 4);
            if (iVar1 == 0) {
              lVar2 = 0;
            }
            else {
              lVar2 = FUN_180606310();
              lVar2 = lVar2 + iVar1;
            }
            if (*(char *)(lVar2 + 0x10) != '\0') goto LAB_180608605;
          }
          if ((*pbVar5 & 0x40) == 0) {
            FUN_180607804(param_1,param_2,param_3,param_4,param_5,pbVar5,0,local_78,param_7,param_8,
                          1,0);
          }
        }
LAB_180608605:
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_48);
    }
  }
  return;
}



