// FUN_1805aa630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aa630 */

ulonglong FUN_1805aa630(longlong param_1,ulonglong *param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  code *pcVar3;
  ulonglong uVar2;
  uint uVar4;
  char *pcVar5;
  char *_Str1;
  uint *puVar6;
  char *pcVar7;
  longlong local_res10;
  undefined1 local_48 [16];
  int local_38;
  
  pcVar7 = (char *)((longlong)param_4 + param_3);
  *param_2 = param_3;
  param_2[2] = (ulonglong)pcVar7;
  *(int *)(param_2 + 3) = 0;
  (*(code *)param_2[7])(param_2);
  pcVar5 = (char *)*param_2;
  while (pcVar5 < pcVar7) {
    if (((*pcVar5 == 'F') && (pcVar5 + 0x19 < pcVar7)) &&
       (iVar1 = strncmp(pcVar5,"FontDirectory",0xd), iVar1 == 0)) {
      (*(code *)param_2[8])(param_2);
      (*(code *)param_2[7])(param_2);
      pcVar5 = (char *)*param_2;
      _Str1 = pcVar5;
      if (pcVar5 < pcVar7) {
        do {
          if (((*_Str1 == 'k') && (_Str1 + 5 < pcVar7)) &&
             (iVar1 = strncmp(_Str1,"known",5), iVar1 == 0)) goto LAB_1805aa725;
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) goto LAB_1805aa871;
          (*(code *)param_2[7])(param_2);
          _Str1 = (char *)*param_2;
        } while (_Str1 < pcVar7);
        *param_2 = (ulonglong)pcVar5;
      }
      else {
LAB_1805aa725:
        if (_Str1 < pcVar7) {
          (*(code *)param_2[8])(param_2);
          (*(code *)param_2[0xe])(param_2,local_48);
          if (local_38 == 3) {
            pcVar5 = (char *)*param_2;
          }
        }
        *param_2 = (ulonglong)pcVar5;
      }
    }
    else if ((*pcVar5 == '/') && (pcVar5 + 2 < pcVar7)) {
      *param_2 = (ulonglong)(pcVar5 + 1);
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) break;
      iVar1 = (int)*param_2 - (int)pcVar5;
      uVar4 = iVar1 - 1;
      if ((iVar1 - 2U < 0x15) && ((char *)*param_2 < pcVar7)) {
        puVar6 = &DAT_180673030;
        do {
          if (*(void **)(puVar6 + 2) != (void *)0x0) {
            if ((*puVar6 == uVar4) &&
               (iVar1 = memcmp(pcVar5 + 1,*(void **)(puVar6 + 2),(ulonglong)uVar4), iVar1 == 0)) {
              if (puVar6[5] == 0xb) {
                (**(code **)(puVar6 + 6))(param_1,param_2);
                uVar2 = (ulonglong)(uint)param_2[3];
              }
              else {
                uVar4 = puVar6[4];
                if (uVar4 == 3) {
                  local_res10 = 0x110;
                }
                else if ((uVar4 == 4) || (uVar4 != 6)) {
                  local_res10 = 0xd8;
                }
                else {
                  local_res10 = 0x27c;
                }
                local_res10 = local_res10 + param_1;
                if (puVar6[5] - 9 < 2) {
                  pcVar3 = (code *)param_2[0x11];
                }
                else {
                  pcVar3 = (code *)param_2[0x10];
                }
                uVar2 = (*pcVar3)(param_2,puVar6,&local_res10,0,0);
              }
              *(int *)(param_2 + 3) = (int)uVar2;
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              break;
            }
            puVar6 = puVar6 + 0xe;
          }
        } while (*puVar6 != 0);
      }
    }
    else {
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) break;
    }
    (*(code *)param_2[7])(param_2);
    pcVar5 = (char *)*param_2;
  }
LAB_1805aa871:
  return (ulonglong)(uint)param_2[3];
}



