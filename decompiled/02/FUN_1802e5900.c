// FUN_1802e5900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e5900 */

bool FUN_1802e5900(float *param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  char local_54;
  
  if (*(char *)((longlong)param_1 + 0x25) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 9) == '\0') {
    if (0 < *param_3) {
      *param_3 = *param_3 + -1;
      fVar7 = param_1[2] + 8.0;
      FUN_1802dc620(fVar7,&local_68,*param_1,param_1[1],fVar7,param_1[2] - 256.0);
      if (local_54 != '\0') {
        *(undefined1 *)(param_1 + 9) = 1;
        *(undefined8 *)(param_1 + 4) = local_68;
        *(undefined8 *)(param_1 + 6) = uStack_60;
        param_1[8] = local_58;
        if ((SUB41(local_58,0) == '\0') || (sVar4 = thunk_FUN_180624430(param_1[4]), 0 < sVar4)) {
LAB_1802e59fe:
          *(undefined1 *)((longlong)param_1 + 0x25) = 1;
          return true;
        }
        fVar7 = param_1[7];
        sVar4 = thunk_FUN_180624430(param_1[6] + param_1[5] + fVar7);
        if ((0 < sVar4) || ((fVar7 < 0.25 || (1.01 < fVar7)))) goto LAB_1802e59fe;
        goto LAB_1802e5a09;
      }
    }
LAB_1802e5b47:
    bVar6 = false;
  }
  else {
LAB_1802e5a09:
    fVar7 = param_1[0x19f];
    fVar8 = (param_1[3] + param_1[3]) * 0.125;
    if ((int)fVar7 < 0x51) {
      fVar9 = 128.0;
      fVar10 = 32.0;
      do {
        if (*param_3 < 1) break;
        *param_3 = *param_3 + -1;
        iVar5 = (int)param_1[0x19f] % 9;
        fVar7 = (float)iVar5 * fVar8 - param_1[3];
        fVar2 = (float)((int)param_1[0x19f] / 9) * fVar8 - param_1[3];
        fVar3 = param_1[4] - (fVar2 * param_1[6] + fVar7 * param_1[5]) / param_1[7];
        FUN_1802dc620(iVar5,&local_68,fVar7 + *param_1,fVar2 + param_1[1],fVar3 + fVar10,
                      fVar3 - fVar9);
        if (local_54 == '\0') goto LAB_1802e5b47;
        fVar7 = param_1[0x19f];
        param_1[0x19f] = (float)((int)fVar7 + 1);
        lVar1 = (longlong)(int)fVar7 + 2;
        *(undefined8 *)(param_1 + lVar1 * 5) = local_68;
        *(undefined8 *)(param_1 + lVar1 * 5 + 2) = uStack_60;
        param_1[lVar1 * 5 + 4] = local_58;
        fVar7 = param_1[0x19f];
      } while ((int)fVar7 < 0x51);
    }
    bVar6 = fVar7 == 1.13505e-43;
    *(bool *)((longlong)param_1 + 0x25) = bVar6;
  }
  return bVar6;
}



