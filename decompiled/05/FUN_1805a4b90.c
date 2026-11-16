// FUN_1805a4b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a4b90 */

ulonglong FUN_1805a4b90(longlong param_1,undefined8 *param_2,char *param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar4;
  ulonglong uVar3;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  longlong local_res10 [3];
  
  pcVar8 = param_3 + (param_4 & 0xffffffff);
  param_2[2] = pcVar8;
  *(undefined4 *)(param_2 + 3) = 0;
LAB_1805a4bc0:
  do {
    *param_2 = param_3;
    (*(code *)param_2[7])(param_2);
    pcVar7 = pcVar8 + -0x12;
    if ((char *)*param_2 < pcVar8) {
      pcVar7 = (char *)*param_2 + -0x11;
    }
    for (; param_3 < pcVar7; param_3 = param_3 + 1) {
      if (((*param_3 == '%') && (iVar1 = strncmp(param_3,"%ADOBeginFontDict",0x11), iVar1 == 0)) &&
         (*(int *)(param_1 + 0x1b0) != 0)) {
        *(int *)(param_2 + 0x17) = *(int *)(param_2 + 0x17) + 1;
      }
    }
    pcVar7 = (char *)*param_2;
    if (pcVar8 <= pcVar7) {
LAB_1805a4d6c:
      uVar3 = 3;
      if (*(int *)(param_1 + 0x1b0) != 0) {
        uVar3 = (ulonglong)*(uint *)(param_2 + 3);
      }
      return uVar3;
    }
    (*(code *)param_2[8])(param_2);
    if ((pcVar8 <= (char *)*param_2) || (*(int *)(param_2 + 3) != 0)) goto LAB_1805a4d6c;
    if ((*pcVar7 != '/') || (pcVar8 <= pcVar7 + 2)) {
LAB_1805a4d5a:
      param_3 = (char *)*param_2;
      goto LAB_1805a4bc0;
    }
    iVar1 = (int)(char *)*param_2 - (int)pcVar7;
    uVar6 = iVar1 - 1;
    if (0x14 < iVar1 - 2U) goto LAB_1805a4d5a;
    puVar5 = &DAT_180671e60;
    uVar2 = 0xb;
    do {
      if ((uVar2 == uVar6) &&
         (iVar1 = memcmp(pcVar7 + 1,*(void **)(puVar5 + 8),(ulonglong)uVar6), iVar1 == 0)) {
        if (*(int *)(puVar5 + 0x14) == 0xb) {
          (**(code **)(puVar5 + 0x18))(param_1,param_2);
          uVar3 = (ulonglong)*(uint *)(param_2 + 3);
        }
        else {
          iVar1 = *(int *)(puVar5 + 0x10);
          if (iVar1 == 1) {
            local_res10[0] = param_1 + 0xe8;
          }
          else if (iVar1 == 3) {
            local_res10[0] = param_1 + 0x1c8;
          }
          else if (iVar1 == 4) {
            local_res10[0] = param_1 + 0x110;
          }
          else if (iVar1 == 6) {
            local_res10[0] = param_1 + 0x148;
          }
          else {
            if (*(uint *)(param_1 + 0x1b0) <= *(uint *)(param_2 + 0x17)) {
              *(undefined4 *)(param_2 + 3) = 0xa0;
              return 0xa0;
            }
            local_res10[0] =
                 (ulonglong)*(uint *)(param_2 + 0x17) * 0xfc + *(longlong *)(param_1 + 0x1b8);
          }
          if (*(int *)(puVar5 + 0x14) - 9U < 2) {
            pcVar4 = (code *)param_2[0x11];
          }
          else {
            pcVar4 = (code *)param_2[0x10];
          }
          uVar3 = (*pcVar4)(param_2,puVar5,local_res10,0,0);
        }
        *(int *)(param_2 + 3) = (int)uVar3;
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        goto LAB_1805a4d5a;
      }
      uVar2 = *(uint *)(puVar5 + 0x38);
      puVar5 = puVar5 + 0x38;
    } while (uVar2 != 0);
    param_3 = (char *)*param_2;
  } while( true );
}



