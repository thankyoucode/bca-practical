import sys
import time
from datetime import datetime


def track_time():
    start = time.time()
    print(f"🚀 Started: {datetime.now().strftime('%H:%M:%S')}")

    try:
        while True:
            elapsed = time.time() - start
            sys.stdout.write(
                f"\r⏱️ {int(elapsed//3600):02d}:{int((elapsed%3600)//60):02d}:{int(elapsed%60):02d}.{int((elapsed%1)*1000):03d}  "
            )
            sys.stdout.flush()
            time.sleep(0.01)

    except KeyboardInterrupt:
        print("\n🛂 Tracking Stopped")


track_time()
