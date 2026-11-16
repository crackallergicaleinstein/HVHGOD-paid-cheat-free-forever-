// FUN_1803849d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803849d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803849d0(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  param_1[0x86] = param_1[0x86] + 1;
  if (((((param_1[0x86] & 0xf) == 0) && (*(char *)((longlong)param_3 + 0x14) != '\0')) &&
      (*(char *)((longlong)param_1 + 0x21d) == '\0')) && (puVar2 = param_1 + 0x84, 5 < *puVar2)) {
    uVar7 = 0;
    if ((char)param_1[0x87] == '\0') {
      if (param_1 != puVar2) {
        puVar6 = param_1 + 4;
        do {
          local_58 = 3;
          iVar5 = (**(code **)(*(longlong *)*param_2 + 0xc0))
                            ((longlong *)*param_2,&local_58,puVar6 + -4);
          if (iVar5 < 0) {
LAB_180384b4c:
            FUN_180384bf0(param_1,param_2);
            *(undefined1 *)((longlong)param_1 + 0x21d) = 1;
          }
          local_50 = 2;
          iVar5 = (**(code **)(*(longlong *)*param_2 + 0xc0))
                            ((longlong *)*param_2,&local_50,puVar6 + -2);
          if (iVar5 < 0) goto LAB_180384b4c;
          local_48 = 2;
          iVar5 = (**(code **)(*(longlong *)*param_2 + 0xc0))((longlong *)*param_2,&local_48,puVar6)
          ;
          if (iVar5 < 0) goto LAB_180384b4c;
          local_40 = 2;
          iVar5 = (**(code **)(*(longlong *)*param_2 + 0xc0))
                            ((longlong *)*param_2,&local_40,puVar6 + 2);
          if (iVar5 < 0) goto LAB_180384b4c;
          puVar1 = puVar6 + 0x12;
          puVar6 = puVar6 + 0x16;
        } while (puVar1 != puVar2);
      }
      *(undefined1 *)(param_1 + 0x87) = 1;
    }
    puVar6 = param_1 + 0x14;
    do {
      if (*puVar6 == 0) {
        uVar4 = param_3[1];
        uVar3 = param_3[2];
        param_1 = param_1 + (ulonglong)uVar7 * 0x16;
        *(undefined8 *)(param_1 + 8) = *param_3;
        *(undefined8 *)(param_1 + 10) = uVar4;
        *(undefined8 *)(param_1 + 0xc) = uVar3;
        *(undefined2 *)(param_1 + 0x15) = 1;
        *(undefined8 *)(param_1 + 0xe) = param_4;
        param_1[0x14] = 1;
        *puVar2 = uVar7;
        (**(code **)(*(longlong *)param_2[1] + 0xd8))((longlong *)param_2[1],*(undefined8 *)param_1)
        ;
        (**(code **)(*(longlong *)param_2[1] + 0xe0))
                  ((longlong *)param_2[1],*(undefined8 *)(param_1 + 2));
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 0x16;
    } while (uVar7 < 6);
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 1;
  }
}



