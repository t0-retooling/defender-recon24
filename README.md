# Workshop of An unexpected journey into Microsoft Defender's signature World (Recon 2024)

## Workshop Abstract

Adversary emulation activities are becoming increasingly common, aiming to closely mimic real attacks. However, the levels of similarity vary significantly depending on the tools used and the TTPs implemented by the red team.

In this workshop, we will explore various degrees of similarity, leading up to the so-called false flag. Using Defender as a case study, we will analyze the signature format used by a specific threat actor. Our goal is to create sample parts that match certain signatures, ultimately resulting in fully functioning samples that match groups of signatures.

Defender employs various types of signatures, and in our analysis, approximately a quarter of them, totaling around 294,000 signatures, can trigger specific detections.

Furthermore, we'll demonstrate how to automatically generate fake PE files that mimic real threats, utilizing selected detection rules derived from the original signature bytes and we will end up having a working implant that triggers specific detection. To achieve this, reverse engineering of the original implant is necessary.

Don't miss out on this opportunity to gain valuable insights into Windows Defender's signature detection mechanisms and to increase the world's entropy!

This is the link to the schedule: [Recon 2024 Schedule](https://cfp.recon.cx/recon2024/talk/TFC3XM/)

## Description of the material

Here is the material for the workshop.

* The related blogpost is on our website: [Windows Defender signatures journey](https://retooling.io/blog/an-unexpected-journey-into-microsoft-defenders-signature-world)

* The toolkit that we used can be downloaded at (rembember to install clang):
https://www.msys2.org/


* The havoc sample used for Lab4_havoc can be downloaded from VirusTotal:

https://www.virustotal.com/gui/file/ffde53857435dbea42dbfb9494518c656ba9da4193b8e3ece47e553535280cf1

* The `test-DarbyA-text.zip` contains a file that tringgers the detection on defender but it is not a malware. The password is _infected_ anyway


